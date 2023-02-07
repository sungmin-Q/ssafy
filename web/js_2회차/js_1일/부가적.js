// 백틱
``
//문자열과 js의 혼합가능
const myname="name";
const intro="제이름은" +myname+ "입니다";
const intro2=`제이름은 ${myname} 입니다.`

//백틱은 enter허용
//오류발생
const hello=`안녕하세요
저는
치킨입니다.`

// adjecthtmlelement 문자열로된 html 태그 집어넣기
const a=`
  <div class="A">
    안녕하세요
  </div>
`
document.querySelector('body').insertAdjacentElement('beforeend',a);

const b=(hello)=>`
<div class='a'
  ${hello}
  </div>
  `

