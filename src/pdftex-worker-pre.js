Module = {}

Module.TOTAL_MEMORY = 80 * 1024 * 1024
Module.noInitialRun = true

Module.print = function (log) { postMessage({ type: 'log', value: log }) }
Module.printErr = function (err) { postMessage({ type: 'err', value: err }) }

addEventListener('message', function (event) {
  var m = event.data
  var uint8Array
  if (m.type === 'start') {
    try {
      shouldRunNow = true
      FS.writeFile('input.tex', m.source)
      Module.run(['-interaction=nonstopmode', '-output-format', 'pdf', 'input.tex'])
    } catch (err) {
      // log
      uint8Array = FS.readFile('input.log')
      var log = new TextDecoder("utf-8").decode(uint8Array)
      postMessage({ type: 'finish', value: { success: false, message: err + '', url: null, log: log } })
      return
    }
    // pdf
    uint8Array = FS.readFile('input.pdf')
    var blob = new Blob([uint8Array], { type: 'application/pdf' })
    var url = URL.createObjectURL(blob)
    // log
    uint8Array = FS.readFile('input.log')
    var log = new TextDecoder("utf-8").decode(uint8Array)
    postMessage({ type: 'finish', value: {success: true, url: url, log: log }})
  }
})

Module.preInit = function () {
  // Module.FS_createPath('/', '', true, true)
  texliveFiles.forEach(function (f) {
    if (f.lastIndexOf('/.') === f.length - 2) {
      Module.FS_createPath('/', f.slice(0, f.length - 2), true, true)
    } /* else {
      var split = f.lastIndexOf('/')
      var filename = split >= 0 ? f.slice(split + 1) : f
      var path = f.slice(0, split)
      Module.FS_createLazyFile(path, filename, '/src/texlive' + f, true, true)
    }*/
  })
}