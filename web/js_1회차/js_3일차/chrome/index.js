// 토글버튼
const togglButton=document.querySelector(".toggle-button");
// 배경
const bodyBackground=document.querySelector("body");
// headernav
const headerNav=document.querySelector(".header-nav-list-wrapper");
// bookmark-wrapper
const bookmarkWrappers=document.querySelector(".bookmark-wrapper");
// serach-input
// s를 붙히고 qusAll
const searchInput=document.querySelector("#search-input");
// img-icon-wrpper
const imgIconWrappers=document.querySelectorAll(".img-icon-wrapper");
// bookmark-txt
const bookMartTxts=document.querySelectorAll(".bookmark-text");

togglButton.addEventListener("click",function(){
  // 클릭
  // 다크모드로 전환되는 상태
  // 일반모드 -> 다크모드로 텍스트 변경필요
  // .붙이지 않아야함
  togglButton.textContent="다크모드";
  togglButton.classList.toggle('toggle-button_darkmode');
  bodyBackground.classList.toggle('body-background-darkmode');
  headerNav.classList.toggle("text-darkmode");

  for(let i=0;i<imgIconWrappers.length;i++){
    imgIconWrappers[i].classList.toggle("img-icon-wrapper-darkmode");
  }
  for(let i=0;i<bookMartTxts.length;i++){
    bookMartTxts[i].classList.toggle("text-darkmode");
  }

  // class.contains의 활용
  if(togglButton.classList.contains('toggle-button_darkmode')){
    togglButton.textContent="일반모드";
  }

  // bodyBackground.classList.toggle("body-background-darkmode");
  // if(togglButton.classList.contains("toggle-button-darkmode")){
  //   togglButton.textContent="일반모드";
    
  // }
})

searchInput.addEventListener('keyup',function(event){
  // event.code 어떤키 입력했는지 알림
  // enter입력시 검색을 진행
  // if(evnt.target.value==='')
  if(event.code==='Enter'){
    if(!event.target.value){
      alert("검색어 미입력");
      return;
    }
    // 이동하기
    // location.href=
    const googleSearch="https://www.google.com/search?q=";
    location.href=googleSearch+event.target.value;
    // 새창으로 열기
    // window.open
    //<a href=" " target="_ ">새창으로 열기</a>
    window.open(googleSearch+event.target.value,"_blank");
  }
})