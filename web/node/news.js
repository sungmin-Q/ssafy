const puppeteer=require("puppeteer");
const main =async()=>{
  const browser=await puppeteer.launch({
    headless:true
  })
  const page=await browser.newPage();
  await page.goto("https://news.daum.net/digital#1");
  await page.waitForSelector(".list_newsmajor > li");
  const data=await page.evaluate(()=>{
    const lst=document.querySelectorAll(".list_newsmajor > li .link_txt");
    const result=Array.from(lst).map(li=>li.textContent);
   // return result;
  })
  console.log(result);
}
main();