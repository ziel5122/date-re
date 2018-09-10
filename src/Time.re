open Printf;

type time = {
  years: int,
  months: int,
  days: int,
  hours: int,
};

let print_time = (time: time) => {
  let { days, hours, months, years } = time;
  printf("%d year(s), %d month(s), %d day(s), %d hour(s)\n", years, months, days, hours);
}