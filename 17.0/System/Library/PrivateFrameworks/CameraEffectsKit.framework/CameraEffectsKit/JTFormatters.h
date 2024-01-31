@interface JTFormatters : NSObject

+ (id)dateFormatter;
+ (id)dateFormatterLongStyle;
+ (id)dateComponentsFormatterHourMinSec;
+ (id)dateComponentsFormatterMinSec;
+ (id)dateFormatterDayOfWeekMonthDayYear;
+ (id)dateFormatterDebugDate;
+ (id)dateFormatterMonthDay;

@end
