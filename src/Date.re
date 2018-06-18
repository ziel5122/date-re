type thirtyDayMonth =
  | April
  | June
  | September
  | November

type thirtyOneDayMonth =
  | January
  | March
  | May
  | July
  | August
  | October
  | December

type month = 
  | January
  | February
  | March
  | April
  | May
  | June
  | July
  | August
  | September
  | October
  | November
  | December

type date = {
  year: int,
  month,
  day: int,
};

type time = {
  years: int,
  months: int,
  days: int,
};

let numDaysInMonth = (year, month) => {
  print_int(year); print_newline();
  print_int(month); print_newline();
} 