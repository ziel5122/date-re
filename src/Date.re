open Printf;

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
  monthIndex: int,
  day: int,
  hour: int,
};

let print = (date as d: date) => {
  let { year, monthIndex, day, hour } = date;
  printf("%d %d %d %d\n", year, monthIndex, day, hour);
}

let timeDifference = (date0, date1) => {
  let rawDifferences: array(int) = [|
    date0.year - date1.year,
    date0.monthIndex - date1.monthIndex,
    date0.day - date1.day,
    date0.hour - date1.hour,
  |];
}