
const cardArray=[
  {
    name:"cat",
    img:"./public/cat.png",
  },
  {
    name:"dog",
    img:"./public/dog.png",
  },
  {
    name:"elepahant",
    img:"./public/elepahant.png",
  },
  {
    name:"hedgehog",
    img:"./public/hedgehog.png",
  },
  {
    name:"pig",
    img:"./public/pig.png",
  },
  {
    name:"squirrel",
    img:"./public/squirrel.png",
  },
];

const gameDom=[];

///////////////////////////////////

const getGameDom=()=>{
  const rows=document.querySelectorAll(".container.row");
  rows.forEach((row,idx)=>{
    gameDom[idx]=rows[idx].querySelectorAll(".column");
    console.log(gameDom);
  })
}
const flip = (location) => {
  console.log(location);
};

///////////////////////////////////
getGameDom();