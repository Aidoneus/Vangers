"use strict";

const content = [
  {n: 'h1', t: 'Что это?'},
  {n: 'p', t: 'Модификация Cx («Community eXperiments») разрабатывается сообществом любителей игры Вангеры и движется в трёх основных направлениях:'},
  {n: 'ul', c: [
    {n: 'li', t: 'Расширение функционала сетевой игры с целью повышения реиграбельности;'},
    {n: 'li', t: 'Тестирование и экспериментирование с различными нововведениями; примеры – новые миры, мехосы, оружие, биосы, игровые механики и так далее;'},
    {n: 'li', t: 'Массовое тестирование экспериментальных исправлений ошибок и некрупномасштабного нового функционала с последующим переносом в обычную игру; пример – новые цвета мехосов.'}
  ]}
];

function placeNode(input, optionalParent) {
  const localNode = document.createElement(input.n);
  if (typeof input.c !== "undefined") {
    input.c.map(e => placeNode(e, localNode));
  } else {
    localNode.textContent = input.t;
  }
  document.body.appendChild(localNode);
}

function fillPage() {
  content.map(e => placeNode(e));
}

