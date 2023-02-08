const data=[0,1,2,3,4];

const accResult=data.reduce((acc,cur)=>{
  console.log(acc,cur);  
  return acc+cur;
  },1);

console.log(accResult);

//acc누산기 sum+=
//cur초기값
//acc(next)=acc(now)+cur(now)
//cur초기값 생략가능
//생략시 인덱스 0번 잡음
// 0부터 n까지의 합

const studentInfo=[
  {
    name:"jony",
    age:30
  },
  {
    name:"sony",
    age:30
  },
  {
    name:"nana",
    age:30
  },
]
const newStudentInfo=studentInfo.map((student,idx)=>{
  console.log(student,idx);
  return student.name;
})

const filt=studentInfo.reduce((acc,cur)=>{
  if(cur.age>=30)
    acc.push(cur);
  return acc;
},[])
console.log(filt);

studentInfo.reduce((acc,cur)=>{
  acc.push(cur.name)
})