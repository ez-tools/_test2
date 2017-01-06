import uglify from 'rollup-plugin-uglify'

export default {
  entry: 'src/pdftex-worker.js',
  format: 'umd',
  dest: 'pdftex-worker.js',
  plugins: [
    uglify()
  ]
}
