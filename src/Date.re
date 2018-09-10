open Printf;

open Month;
open Time;

type date = {
  year: int,
  month: month,
  day: int,
  hour: int,
};

let print_date = (date: date) => {
  let { day, hour, month, year } = date;
  printf("%d %s %d %d\n", year, Month.toString(month), day, hour);
}

let timeDifference = (d0: date, d1: date) => {
  let rawHourDifference = d0.hour - d1.hour

  let (rawDayDifference, hourDifference) = {
    if (rawHourDifference < 0) {
      (d0.day - d1.day - 1, rawHourDifference + Day.numHours)
    } else {
      (d0.day - d1.day, rawHourDifference)
    }
  };

  let (rawMonthDifference, dayDifference) = {
    if (rawDayDifference < 0) {
      (
        Month.index(d0.month) - Month.index(d1.month) - 1, 
        rawDayDifference + Month.numDays(d1.month),
      )
    } else {
      (Month.index(d0.month) - Month.index(d1.month), rawDayDifference)
    }
  };

  let (yearDifference, monthDifference) = {
    if (rawMonthDifference < 0) {
      (d0.year - d1.year - 1, rawMonthDifference + Year.numMonths)
    } else {
      (d0.year - d1.year, rawMonthDifference)
    }
  };

  {
    years: yearDifference,
    months: monthDifference,
    days: dayDifference,
    hours: hourDifference,
  }
}