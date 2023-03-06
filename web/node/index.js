// 패키지 가져오기 (require)
// 내부 모듈 ./

const puppeteer = require("puppeteer");
const main = async() =>{
  //브라우져 만들기
  const browser = await puppeteer.launch({
    //headless기본값 true
    headless:false
  })
  //브라우져 페이지 만들기
  const page=await browser.newPage();
  //페이지에서 주소로 이동하기
  await page.goto("https://comic.naver.com/webtoon?tab=mon");
  //waitForSelect -> 특정 selector가 올때까지 대기
  //이미지 로딩시 들어오기까지 기다리는 역할(로딩창 있는 크롤링)
  await page.waitForSelector("#content .item img")
  //월요웹툰 리스트 document.querySelectorAll("#content .item");
  // 크롤링 데이터 가져오기
  //node.js는 브라우져 아닌 환경이기 때문에 document사용불가능
  //evaluate 에서는 사용가능
  const data=await page.evaluate(()=>{
    //console.log("test");
    const webtoonlst=document.querySelectorAll("#content .item img");
    //quiryselectall 유사배열 배열화 필요
    const result=Array.from(webtoonlst).map(li=>li.getAttribute('alt'));
    return result;
  })
  console.log(data);
  //스크린샷 찍기
  //await page.screenshot({path:"screenshot.jpg",fullPage:true});
  //pdf (headless: true 에서만 동작)
  //await page.pdf({path:"test.pdf",format:'A4'});
  //브라우져 종료
  //await browser.close();
}
main();