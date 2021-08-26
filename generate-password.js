const bcrypt = require('bcrypt');
console.log(bcrypt.hashSync(process.argv.slice(2).toString(), 10))
