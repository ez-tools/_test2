/* eslint-env worker */
/* global FS, texliveFiles, addEventListener */

import { texliveFiles } from './texlive-files.js'
import { Module } from './pdftex-worker-generated.js'

addEventListener('message', function (event) {
  var m = event.data
  if (m.type === 'start') {
    try {
      shouldRunNow = true
      FS.writeFile('input.tex', m.source)
      Module.run(['-interaction=nonstopmode', '-output-format', 'pdf', 'input.tex'])
    } catch (err) {
      postMessage({ type: 'finish', value: { success: false, message: err + '', result: null } })
      return
    }
    return // TODO remove
    var uint8Array = FS.readFile('input.pdf')
    var blob = new Blob([new DataView(uint8Array)], { type: 'application/pdf' })
    var url = URL.createObjectURL(blob)
    postMessage({ type: 'finish', value: {success: true, message: result, result: url} })
  }
})

Module.preInit = function () {
  Module['FS_root'] = function() {
    return FS.root.contents;
  }
  texliveFiles.forEach(function (f) {
    console.log(f)
    if (f.lastIndexOf('/.') === f.length - 2) {
      Module.FS_createPath('/', f.slice(0, f.length - 2), true, true)
    } else {
      var split = f.lastIndexOf('/')
      var filename = split >= 0 ? f.slice(split + 1) : f
      var path = f.slice(0, split)
      Module.FS_createLazyFile(path, filename, '//src/texlive' + f, true, true)
    }
  })
  self['postMessage']({'type': 'ready'})
}
