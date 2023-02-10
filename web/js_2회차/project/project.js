// const imgurl="https://picsum.photos/1200/720";

// function setRenderBackground(){
//   axios.get(imgurl, { responseType: "blob"}).then((result)=>{
//     console.log(result);
//     console.log(result.data);
//     console.log(URL.createObjectURL(result.data));
//     console.log(document.querySelector("body").style.backgroundImage = `url(${URL.createObjectURL(result.data)})`)

//   })
// }

function setRenderBackground(){
  const imageURL = "https://picsum.photos/1280/720"
  axios.get(imageURL, { responseType: "blob"})
  .then((result) => {
  // console.log(result)
  // console.log(result.data)
  // console.log(URL.createObjectURL(result.data))
  const domurl=URL.createObjectURL(result.data);
  const body=document.querySelector("body");
  body.style.backgroundImage = `url(${domurl})`
  })
}
(function(){
  setRenderBackground();
  setInterval(() => {
  setRenderBackground()},1000)})();

// function setTime()
// {
//   const timer=document.querySelector(".timer");
//   setInterval(()=>{
//     const date=new Date();
//     timer.textContent=`${date.getHoures()}:${date.getMinutes()}:${date.getseconds()}`;
//   },1000);
// }
// (function(){
//   setRenderBackground();
//   setTime();
//   setInterval(()=>{setRenderBackgroundJ()},5000);
// })();


function setTime() {
  const timer = document.querySelector(".timer");
  setInterval(() => {
  const date = new Date();
  timer.textContent = `${date.getHours()}:${date.getMinutes()}:${date.getSeconds()}`;
  }, 1000);
  }

  function setMemo(){
    memoInput = document.querySelector(".memo-input")
    // console.log(memoInput)
    memoInput.addEventListener("keyup", (e) => {
    // console.log(e)
    // console.log(e.code)
    // console.log(e.currentTarget.value)
    if(e.code === "Enter" && e.currentTarget.value){
      localStorage.setItem("todo", e.currentTarget.value);
      getMemo();
      memoInput.valuek="";
      }
      
    })
    }
    
    function getMemo(){
      const memo = document.querySelector(".memo");
      const memoValue = localStorage.getItem("todo");
      memo.textContent = memoValue;
      }
      
    
      function deleteMemo() {
        document.addEventListener("click", (e) => {
        if (e.target.classList.contains("memo")) {
        
        localStorage.removeItem("todo");
        
        e.target.textContent = "";
        }});
        }

  (function (){
    setRenderBackground();
    setTime();
    setMemo();
    getMemo();
    deleteMemo();
    setInterval(() => {setRenderBackground()},5000)
    })();
  
//promise가 오는 경우에만 async가능
//5초마다 렌더링함
// setInterval함수의 사용
//어떻게 작업?