//배열안의 객체
const studens=[
  {
    name:"kim1",
    age:26,
    address:'창원'
  },
  {
    name:"kim2",
    age:27,
    address:'창원'
  },
  {
    name:"kim3",
    age:30,
    address:'인천'
  },
];

//Array.forEach형식
//함수 전체가 들어간 형태
//Array의 순회 
//return void
//순회에 집중

studens.forEach((student)=>{
  console.log(student)
  console.log(student.name);
});

//동일한 크기의 새로운 배열을 만들고자 할때
//원형을 손상 시키지 않음(emuterbility)
//map
const names=studens.map((student)=>{
  return student.name;
})
console.log(names);

//새로운 배열을 만듬,조건에 맞는 값들로만
//길이가 달라질수 있음
//return에 조건을 제공
//필터에 맞는 조건을 확인,not 조건을 추출 하는건 아님
const over30_people=studens.filter((student)=>{
  return student.age>=30;
})
console.log(over30_people);

//filter->map
const under30_people=studens.filter((student)=>{
  return student.age<30
})
const under30_peopleName=under30_people.map((student)=>student.name);
console.log(under30_peopleName)

function samplefunc(student){
  return strudent.age<30;
}

//재사용할 함수는 외부에서 정의
//const under30_people=studens.filter(samplefunc);

const arr1=[1,2,3,4,5,6,7,8,9,10];
const result1=arr1.filter((num)=>{
  if(num%2==1)
    return num;
})
const result=result1.map((num)=>{
  return num*num;
})
console.log(result);

const orderList=[
  {
    menu:"치킨",
    price:17000,
    event:false,
    count:50,
  },
  {
    menu:"돈까스",
    price:8500,
    event:true,
    count:99,
  },
  {
    menu:"마라탕",
    price:17000,
    event:false,
    count:100,
  },
  {
    menu:"쫄면",
    price:6500,
    event:false,
    count:0,
  },
  {
    menu:"짜장면",
    price:5500,
    event:true,
    count:30,
  },
];

const tmp=orderList.filter((count)=>{
  return count>0;
});

tmp=tmp.map((event,price)=>{
  if(event)
    return price+10;
})

console.log(tmp);