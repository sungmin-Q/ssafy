//함수 표현식
 const a=function(){
  console.log("a");
 }
a();

 //무명 매서드를 넣음
 const b= () =>console.log("b");
 b();
 const c= () =>{console.log("c")};
 c();

 //return의 생략가능
 //sum
 const sum=(a,b)=>{return a+b};
 sum(3,4);
 const sum2=(a,b)=>a+b;
 sum2(3,4);
//pow
 //!const pow=(a)=>a*a;
 const pow=(a)=>{return a*a};
 pow(10);

