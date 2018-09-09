open Date;
open Print;
open Time;

let date0: date = {
  year: 2018,
  month: February,
  monthIndex: 1,
  day: 20,
  hour: 20,
};

let date1: date = {
  year: 2017,
  month: November,
  monthIndex: 10,
  day: 20,
  hour: 22,
};

print_date(date0);
print_date(date1);