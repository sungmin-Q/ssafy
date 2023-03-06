const mysql = require("mysql2/promise");

const pool = mysql.createPool({
    // aws ip
    host: "3.34.47.151",
    // mysql username
    user: "ssafy",
    // mysql user password
    password: "*ssafy09",
    // db name
    database: "ssafy",
    waitForConnections: true,
    connectionLimit: 10,
    queueLimit: 0,
})

module.exports = { pool }