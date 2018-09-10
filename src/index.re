open Date;
open Month;
open Time;

let date0: date = {
  year: 2019,
  month: November,
  day: 19,
  hour: 23,
};

let date1: date = {
  year: 2018,
  month: September,
  day: 21,
  hour: 23,
};

print_string("d0: "); print_date(date0);
print_string("d1: "); print_date(date1);
let time0 = timeDifference(date0, date1);
print_time(time0);