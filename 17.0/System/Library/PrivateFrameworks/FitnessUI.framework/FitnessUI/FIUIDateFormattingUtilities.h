@interface FIUIDateFormattingUtilities : NSObject

+ (id)timeFormatter;
+ (id)_dateFormatter;
+ (BOOL)_dateStringFits:(id)a0 font:(id)a1 maxWidth:(double)a2;
+ (id)_localizedTodayFormatterWithTemplate:(id)a0;
+ (id)stringWithDayNameAndShortMonthFromDate:(id)a0;
+ (id)stringWithEitherTodayOrLongStyleDateFromDate:(id)a0;
+ (id)stringWithLongestStyleDate:(id)a0 font:(id)a1 maxWidth:(double)a2;
+ (id)stringWithShortStyleDate:(id)a0;
+ (id)timeRangeStringFromDateInterval:(id)a0;
+ (id)timeStringWithSpaceRemoved:(id)a0 date:(id)a1;

@end
