let myDate= new Date()

console.log(`
String:- ${myDate.toString()} 
DateString:- ${myDate.toDateString()}
TimeString:- ${myDate.toTimeString()}
LocaleString:- ${myDate.toLocaleString()}
LocaleDateString:- ${myDate.toLocaleDateString()}
ISO:- ${myDate.toISOString()}
UTC:- ${myDate.toUTCString()}
:- ${myDate.valueOf()}
`);

console.log(myDate);