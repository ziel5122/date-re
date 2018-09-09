open Printf;

let HOURS_IN_DAY = 24
let DAYS_IN_MONTH = (month, _year) => {
  switch (month, _year) {
  |  
  }
}

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
  month: int,
  day: int,
  hour: int,
};

let timeDifference = (d0: date, d1: date) => {
  let difference: time = {
    years: d0.year - d1.year,
    months: d0.month - d1.month,
    days: d0.day - d1.day,
    hours: d0.hours - d1.hours,
  }


}