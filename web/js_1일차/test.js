const arr=[1,3,4];
console.log(arr[3]);
  // 선언자를 붙혀줘야함

  // 1.변수 선언시 선언자 붙일것
  // 2.선언자 세 종류
  // var: 안씀
  // let: 안씀
  // const: const사용 작동오류시 let 사용

데이터는 변경이 없어야 => const
변경하고 싶을 경우 => let
const,let 재선언 불가 for i 사용시
typeof a 
모두 number int 미존재 
모두 string char 미존재
true,false (boolean)
object

0: 수치로서 0
null: 의도적 공백 (에러방지용)
undefined: 의도치않은 공백
arr[n]의 경우 undefined
<body>
<script>
</>
</body>

function addOne(n){
  console.log("hi");
  return n + 1;
}

console.log(addOne(3));
동적타입 언어

function numToString(n){
  return String(n);
}
function stringToNum(text){
  return Number(Text);
}

const a=numToString(2);
const b=stringToNum('3');
console.log(typeof a);
console.log(typeof b);

const result=sampleFunc();
console.log(result);


function retA () {
  return 'A';
}
const sample=retA();
console.log(sample)
typeof(sample);
typeof(sample());
함수도 변수 list 함수포인터
1. 객체 object
2. 함수 function
3. 배열 array
배열 안에 객체
객체(시험,중요)
key와 value로 이루어진 property의 모음
const person ={
  name:"이자룡",    (프로퍼티)
  dateOfBirth:1993, (프로퍼티)
  familyMember:["아빠","엄마","할머니"], (프로퍼티)
  job:"싸피강사", (프로퍼티)
  isMerriaged:true, (프로퍼티)
};

console.log(person.name)
이름의 출력
console.log(person.familyMember)
객체는 각각의 이름이 달려있음 -> 키를 통한 접근
배열 -> 인덱스로 접근
키 중복 불가
객체의 경우 순서가 존재하지 않음
console.log()
객체.메서드

(시험)
배열과 객체의 요소는 const 임에도 변경이 가능
배열에 Push,pop 가능

const arr=[1,2,3];
arr.push(5);
console.log(arr);
새로 만드는건 안됨
const person ={
  name:"이자룡",    (프로퍼티)
  dateOfBirth:1993, (프로퍼티)
  familyMember:["아빠","엄마","할머니"], (프로퍼티)
  job:"싸피강사", (프로퍼티)
  isMerriaged:true, (프로퍼티)
};
person={
  name:"이자룡",    (프로퍼티)
  dateOfBirth:1993, (프로퍼티)
  familyMember:["아빠","엄마","할머니"], (프로퍼티)
  job:"싸피강사", (프로퍼티)
  isMerriaged:true, (프로퍼티)

}
전체는 수정이 불가,일부는 가능

const a="abc"+"def";
a+"df"
const b="bbq"+10;
console.log(a,b);
console.log(a.length,b.length);
number와 결합시 자동 형변환

const arr=[1,2,3,4,5];
console.log(arr.length);
arr도 오브젝트 length 프로퍼티 존재
length 배열과 문자열 모두 사용가능

비교연산**시험
console.log(1=='1');  true  값만 비교
console.log(1==='1'); false 타입까지

===/!== 논리연산 

const arr=[1,2,3];
for(let i=0;i<a.length;i++){
  console.log(arr[i]);
}
const 안 바뀜 -> 에러
let의 사용

const arr=[1,2,3];
arr.push(4);
console.log(arr);
