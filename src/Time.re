open Printf;

type time = {
  years: int,
  months: int,
  days: int,
  hours: int,
};

let print = (time: time) => {
  let { years, months, days, hours } = time;
  printf("%d %d %d %d\n", years, months, days, hours);
}