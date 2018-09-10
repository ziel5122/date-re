type month = 
  | January
  | February(int)
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

let index = (m: month) => {
  switch (m) {
  | January => 0
  | February(_) => 1
  | March => 2
  | April => 3
  | May => 4
  | June => 5
  | July => 6
  | August => 7
  | September => 8
  | October => 9
  | November => 10
  | December => 11
  }
}

let numDays = (m: month) => {
  switch (m) {
  | February(year) => year mod 4 == 0 ? 29 : 28
  | (April | June | November | September) => 30
  | _ => 31
  }
}

let toString = (m: month) => {
  switch (m) {
    | January => "January"
    | February(_) => "February"
    | March => "March"
    | April => "April"
    | May => "May"
    | June => "June"
    | July => "July"
    | August => "August"
    | September => "September"
    | October => "October"
    | November => "November"
    | December => "December"
  }
}

let months = (index, year: int) => {
  let months = [|
    January,
    February(year),
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December,
  |];
  months[index]
};