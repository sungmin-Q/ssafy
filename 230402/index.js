const express=require("express");
const app=express();
const PORT=8080;

const cors=require("cors");
app.use(cors());

app.get("/api/info",(req,res)=>{
  return res.json({
    name:"sungmin",
    job:"student",
    description:"ssafy - codingtest",
    make_server:true
  })
})
app.get("/api/info2",(req,res)=>{
  return res.json({
    description:"this is info2",
    cntl_f5:"server changejk",
  })
})

app.listen(PORT,()=>console.log(`this server is listening on ${PORT}`));