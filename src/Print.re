open Printf;

open Date;
open Time;

let print_date = (date: date) => {
  let { year, monthIndex, day, hour } = date;
  printf("%d %d %d %d\n", year, monthIndex, day, hour);
}
 
let print_time = (time: time) => {
  let { years, months, days, hours } = time;
  printf("%d %d %d %d\n", years, months, days, hours);
}