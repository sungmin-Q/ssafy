//winston->node의 log라이브러리
//winston-daily-rotate ->node의 log 관리 라이브러리
//moment 날짜 포멧 라이브러리
//winston -> node의 대표적인 로그 라이브러리
//winston-daily-rotate-file -> 로그 관리 라이브러리
//moment -> 자바스크립트에서 날짜 포맷 관련 라이브러리

const winston = require("winston");
const { format } = winston;
const { combine } = format;
require("winston-daily-rotate-file");

const transport = new winston.transports.DailyRotateFile({
  level: "debug",
  //저장할 파일 이름
  filename: "./logs/%DATE%.log",
  datePattern: "YYYY-MM-DD-HH",
  zippedArchive: true,
  //파일의 최대크기
  maxSize: "20m",
  //보관할 최대 로그 수
  maxFiles: "1d",
  format: combine(
    format.timestamp({ format: "YYYY-MM-DD HH:mm:ss" }),
    format.json()
  ),
});

const logger = winston.createLogger({
  transports: [transport],
});

module.exports = logger;
