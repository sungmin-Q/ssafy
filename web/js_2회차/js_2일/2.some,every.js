const arr=[1,2,3,4,5];

// some하나만 만족해도 true
// every모든 조건 만족해야 true
// foreach값을 return하지 않음
const result1=arr.some(num => num<0);
const result2=arr.some(num => num>4);

console.log(result1);
console.log(result2);

const result3=arr.every(num => num>0);
const result4=arr.every(num => num>4);

console.log(result3);
console.log(result4);