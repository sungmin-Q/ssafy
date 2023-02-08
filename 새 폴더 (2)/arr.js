const bucketLists = [
  { id: 3, text: "여행가기", done: false },
  { id: 2, text: "치킨 먹기", done: true },
  { id: 1, text: "코딩 하기", done: false },
];

const ids = bucketLists.map((el) => {
  return el.id;
});
const texts = bucketLists.map((el) => {
  return el.text;
});
const dones = bucketLists.map((el) => {
  return el.done;
});
const getValue=(indecator)=>bucketLists.map((bucketLists)=>bucketLists[indecator]);
const removelist=(indecator)=>bucketLists.map((!bucketLists.findIndex(indecator)));

const remove=(id)=>bucketLists.filter((el)=>el.id!==1)
console.log(remove(2));

const Removelist=(id)=>bucketLists.filter((el)=>el.id!==id);
console.log(Removelist(1))

const togglelist=(id)=>bucketLists.map((el)=>{(el.done)!el.done});
function toggle(id){
  if(bucketLists[id]==2)
    return !bucketLists.done;
}

const toggle = (id) => {
  const newBucketLists = structuredClone(bucketLists);
  //값을 사용 하기 위해 깊은복사 structclone
  const ret = newBucketLists.filter((el) => el.id === id);
  //필터는 항상 array return
  //객체 주소로 연결됨
  
  if (ret[0].done) {
    ret[0].done = false;
  } else {
    ret[0].done = true;
  }
  return newBucketLists;
};
//return은 새로운 배열
//무었을 return할지
console.log(toggle(1));
