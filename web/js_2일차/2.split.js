const a="치킨|삼겹살|마라탕";
const arr=a.split("|");
console.log(arr);

for(let i=0;i<arr.length;i++)
  console.log(arr[i]);

// const title
// console.log("title: "+title.textContent);

// 개발자 도구 copy queryselector
// const에 넣어 console.log 출력
// trim()앞뒤 공백을 제거

const title1=document.querySelector("#contents > div.wrap-movie-chart > div.sect-movie-chart > ol:nth-child(2) > li:nth-child(1) > div.box-contents > a > strong");
const title2=document.querySelector("#contents > div.wrap-movie-chart > div.sect-movie-chart > ol:nth-child(2) > li:nth-child(2) > div.box-contents > a > strong");
console.log(title1);
console.log(title2);
const title3=document.querySelector("#contents > div.wrap-movie-chart > div.sect-movie-chart > ol:nth-child(2) > li:nth-child(3) > div.box-contents > a > strong");
let tmp=title1.textContent;
title1.textContent=title3.textContent;
title3.textContent=title3;

const post1=document.querySelector("#contents > div.wrap-movie-chart > div.sect-movie-chart > ol:nth-child(2) > li:nth-child(1) > div.box-image > a > span > img");
const post3=document.querySelector("#contents > div.wrap-movie-chart > div.sect-movie-chart > ol:nth-child(2) > li:nth-child(3) > div.box-image > a > span > img")
let tmp2=post1.src
post1.src=post3.src;
post3.src=tmp2;