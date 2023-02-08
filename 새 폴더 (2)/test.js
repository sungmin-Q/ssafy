const data=[
{
 name:"jony",
 age:23 
},
{
  name:"jo",
  age:33 
 },
 {
  name:"nyf",
  age:54 
 },
]

if(data.length){
  console.log("yes");
}
else{
  console.log("no")
}

const datafromsever=[];
if(datafromsever)
  console.log("이ㄸ다");
else
  console.log("없다");

  const arr1=[1,2,3];
  const arr2=[1,2,3];
  console.log(arr1===arr2);
  //배열의 주소가 다르기 때문에 값은 false
  //배열과 객체는 주소가 함께 포합되어 주소 동일하지 않으면 정료

  const sample=[];
  if(sample==={})
  console.log("empty");
  else
  console,log("exist");

  const abc={
    name:"chicken",
    type:"fly"
  }
  console{name,type}=abc;
  consol{ename,type}=abc;

  console{type}=abc;
,t
const arr=[1,3];{
  return1,2;
}
const [onc]

const smaple=(>){
  const[one,two]=sample();
  console.log(one);
  console.log(two);

  if(sample==={})
  console.log("empty");
  else
  console,log("exist");
}

const square={
  width:200,
  height:200,
};

//동일한 결과
const colorsquare={
  width:square.width,
  width:square.width,
  color:"red",
};
const colorsqare={
  ...square,
  color:"red",
};
console.log(colorsqure)

const catType=["고양이","호랑이","사자"];
const dogType=["개","여유","늑대"]

const animal=[
  ...catType,...dogType,"비버"
];
console.log(animal)

const chicken={
  type:"양념",
}
map
// power
// const datas=[1,2,3,4,5];
// const powarr=datas.map((data)=>data*data);
// console.log(powarr);

// const datas=["a","bcd","ef","g"];
// const newdatas=datas.map((data)=>data.length);
// console.log(newdatas)

map과filter차이
// const datas=[3,5,4,2];
// const newdatasmap=datas.map((data)=> data>3);
// console.log(newdatasmap)
// const newdatasfilter=datas.filter((data)=> data>3);
// console.log(newdatasfilter)

filter예제
// const arr=[1,2,3,4,5,6,7,8,9,10];
// const arr1=arr.filter((data)=>data%2);
// const arr2=arr1.filter((data)=> data>3 && data<9)
// console.log(arr1);
// console.log(arr2);

// const datas=[1,2,3,4,5];
// const result=datas.reduce((acc,cur)=>acc+cur);
// console.log(result)

// const datas=[1,2,3,4,5];
// datas.reduce((acc,cur)=>{
//   const data=cur*cur;
//   acc.push(data);
//   return acc;
// },[])

// datas.reduce((acc,cur)=>{
//   if(cur>2){
//     acc.push(cur)
//   }
//   return acc;
// })
// console.log(datas)

// const arr=[1,2,3,4,5,6,7,8,9,10];
// 짝수
// const result=arr.filter((data)=>!(data%2));
// 홀수
// const result=arr.filter((data)=>data%2);
// console.log(result)
// const mul=result.map((data)=>data*data);

비동기 통신
js싱글 스레드 기반 비동깉욋니 
웹브라우저의 비동기
web api이동
0초후 webapi에서 callbackqueue로 이동
callstack비어있는지 확인 
비어있다면 callstack으로 이동
setTimeout 정확한 초 표기 모함
stack -> webapi ->callbackqueue로
스레드 하나의 프롤그램 실행작용
싱글스레그
하번에 하나의 스레드
데이터요청 하나의 한가지 차례로 실행

A (1sec)
B (10sec)
C (100000sec)
D (10sec)
비동기: 일의 효율의 상승,시점파악불가

비동기 시점 파악을 명확히 하기 위함
1.콜백함수
  콜백함수 내부에 콜백함수로 해결,가독성 하락
2.프라미스
  new Promise()-> pending상태

  resolve 
  paromis((resolce,reject)=>thme)
  
  fulfuilled이행 상태
  axios.get("api address")
  요청성공
    resolve실행
  요청실패
    rejected실행

promise로 return되는 모든것들은

주소 A
주소 B
주서 C

비동기요청(vmfkaltm)
{'
aios.gets("A").then(data=>{
  aios.gets("c").then(data=>{
    axios.get(c,d);

}
}

async,await
조건 promise return에 한해 사용가능
밑에 await붙어줘야 사용가능
async function getData(){
  A요청 데이터요청
  동기처럼 동작
  const data=await axios.get("A");

  요청시 A데이터를 보낵수 있다
  const dData=wawiat axios.get(B.Asata)

  
  요청시 A데이터의 저장 가능
  const cData=wawiat axios.get(B.Asata)
  
  데이터와 일키시킴