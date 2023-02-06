// object
/*const studentInfo={
  name:"kim",
  age:13,
  address:"AAA",
  family:["고양이","고양이"],
  skill:{
    clint:["vue.js","vanila","react"],
    sever:["django"],
    db:["sql"],
  },
  // method
  // 함수도 type
  // 함수를 value로 제공
  sayhi:()=>console.log("hi~~~~"),
};
studentInfo.sayhi();
*/

/*
const arr=[1,2,3];
typeof(arr);
const addnum=(a,b)=>a+b;
typeof(addnum)
string 원시type
*/

// class
//클래스와 객체의 차이점
//사용자 정의 type의 생성
// type의 강제 (prototype)
/*StudentInfo={
  name:String,
  age:Number,
  address:Array,
  skill:Object,
  sayHi:Function,
};


const student1=new StudentInfo();
// student1은 StudentInfo type
*/

/*
class StudentInfo {
  constructor(name, age) {
    this.name = name;
    this.age = age;
    this.address = "";
    //student1에서 this는 student1
    //각자 내부서 동작
    //객체마다 다름
  }
  sayMyName() {
    console.log(`my name is ${this.name}`);
  }
  setAddress(address) {
    this.address = address;
  }
  getAddress() {
    return this.address;
  }
  //객체 내부의 매서드에 접근할때
  useMethod() {
    this.sayMyName();
  }
}

const student1 = new StudentInfo("jony", 30);
const student2 = new StudentInfo("davide",40);
student1.sayMyName();
student1.setAddress("광주 하남");
console.log(student1.getAddress());
student1.useMethod();



/*
const studentInfo = {
  name: "",
  age: -1,
  address: "",
  constructor: function (name, age) {
    this.name = name;
    this.age = age;
  },
  sayMyName: function () {
    console.log(`my name is ${this.name}`);
  },
  //화살표 함수는 this로 접근 불가
  //function의 사용
  setAddress: (address) => (this.address = address),
  getAddress: () => this.address,
  useMethod: function () {
    this.sayMyName();
  },
};

student1.constructor("jony", 30);
student2.constructor("david", 50);
//타입을 강제함으로서 반복을 줄임
//타입 -> 객체
student1.sayMyName();
student1.setAddress("경기 군포시 산본동");
console.log(student1.getAddress());
student1.useMethod();

// 메서드 축약해 사용가능
/* 
  sayMyName(){
    console.log(`myname`)
  }
  sayMyNmae:function(){
    console.log('myname')
  }

키와 값이 동일할때
내가 만든 타입을 여러개 만들고 싶은경우 -> 클래스 
address:address
address
*/

/*
class lawyer{
  constructor(name,age,intro){
    this.name=name;
    this.age=age;
    this.intro=intro;
  }

  introduce(){
    console.log(`name: ${this.name}`);
    console.log(`age: ${this.age}`);
    console.log(`introduce: ${this.intro}`);
  }
};

//여러개의 객체 생성시 
const person1=new lawyer("woo",27,"기러기");
const person2=new lawyer("kim",22,"참치");
person1.introduce();
person2.introduce();
*/
/*
class hero{
  constructor(name,hp){
    this.name=name;
    this.hp=hp;
  }
  showHP(){
    console.log(`hp: ${this.hp}`);
  }
  run(){
    this.hp-=10;
  }
}
const batman=new hero("bat",100);
batman.run();
batman.run();
batman.showHP();

class Superman extends hero{
  fly(){
    console.log("fly");
  }
  constructor(hp,mp){
    super(hp);
    //this.hp=hp와 동일함
    this.mp=mp;
  }
  //super부모의 메서드를 갖다쓰기
}
const superman=new Superman();
superman.fly();
superman.showHP();
*/


//객체의 상속
//오타유의
/*
class Person{
  constructor(name,hp){
    this.name=name;
    this.hp=hp;
  }
  hello(){
    console.log(hello);
  }
}

class Avengers extends Person{
  constructor(name,hp,power,skill){
    super(name,hp);
    this.power=power;
    this.skill=skill;
  }
  infomation(){
    console.log(this.name);
    console.log(this.hp);
    console.log(this.power);
    console.log(this.skill);
  }
  fly(){
    console.log("fly");
  }
}

const A=new Avengers("A",100,"st","no skill");
A.infomation()
A.fly()
*/