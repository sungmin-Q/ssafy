const express=require("express");
const morgan=require("morgan");
const axios=require("axios");
const app=express();
const PORT=8080;

app.use(morgan("dev"));
// 템플릿 엔진으로 ejs로 사용
app.set('view engine','ejs');
// 해당 ejs에서 활용할 경로로 ./views 폴더의 활용
app.set('views','./views');
app.get("/",(req,res)=>{
  //ejs에서 화면을 그리는 방법
  // router -> 수신 -> index.js를 해석하여 넘겨줌
  res.render('index',{name:"pizza"});
})

// axios로 jsonholder 요청 -> 데이터 그리기
// todos -> list
// todos/:id -> detail
app.get("/holder/:id",async(req,res)=>{
  // 위의 result.data를 활용 ejs만들기,for문으로 데이터 출력
    const result=await axios.get(`https://jsonplaceholder.typicode.com/todos`);
    console.log(result.data);
    res.render('holder-list',{data:result.data});
})

/*
app.get("/holder/:id",async(req,res)=>{
  const result=await axios.get(`https://jsonplaceholder.typicode.com/todos/${req.params.id}`);
  console.log(result.data);
  // holder.ejs를 해석 -> 만들기
  res.render('holder',{data:result.data});
})
*/

app.listen(PORT,()=>console.log(`${PORT}서버 구동중`));