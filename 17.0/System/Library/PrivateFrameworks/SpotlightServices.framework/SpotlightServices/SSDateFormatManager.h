@class NSDateIntervalFormatter, NSCalendar, CNDateComponentsFormatter, NSDateFormatter, NSDateComponents, NSLocale, NSDateComponentsFormatter;

@interface SSDateFormatManager : NSObject

@property (retain) NSCalendar *calendar;
@property (retain) NSLocale *overrideLocale;
@property (retain) NSDateComponents *oneDayComponents;
@property (retain) CNDateComponentsFormatter *birthdayDateComponentsFormatter;
@property (retain) NSDateComponentsFormatter *dateComponentsFormatter;
@property (retain) NSDateFormatter *shortRelativeDateFormatter;
@property (retain) NSDateFormatter *mediumRelativeDateFormatter;
@property (retain) NSDateFormatter *dayOfWeekFormatter;
@property (retain) NSDateFormatter *shortDayOfWeekFormatter;
@property (retain) NSDateFormatter *shortDateTimeFormatter;
@property (retain) NSDateFormatter *shortTimeFormatter;
@property (retain) NSDateFormatter *dateFormatter;
@property (retain) NSDateIntervalFormatter *shortDateTimeIntervalFormatter;
@property (retain) NSDateIntervalFormatter *mediumDayOfWeekDateTimeIntervalFormatter;
@property (retain) NSDateIntervalFormatter *shortDateIntervalFormatter;
@property (retain) NSDateIntervalFormatter *mediumDayOfWeekDateIntervalFormatter;
@property (retain) NSDateIntervalFormatter *allDayDateFormatter;
@property (retain) NSDateIntervalFormatter *dateIntervalFormatter;

+ (id)calendar;
+ (void)initialize;
+ (id)dateFormatter;
+ (id)dateIntervalFormatter;
+ (id)tomorrow;
+ (id)stringFromTimeInterval:(double)a0;
+ (void)overrideLocale:(id)a0;
+ (id)dynamicDateTimeStringsFromDate:(id)a0;
+ (id)allDayDateFormatter;
+ (BOOL)date:(id)a0 isBetweenDate:(id)a1 andDate:(id)a2;
+ (id)dateCompletedStringFormat;
+ (id)dateCreatedStringFormat;
+ (id)dateDueStringFormat;
+ (id)dateLastCalledStringFormat;
+ (id)dateLastOpenedStringFormat;
+ (id)dateLastPlayedStringFormat;
+ (id)dateModifiedStringFormat;
+ (id)dyanmicStringFromDate:(id)a0;
+ (id)dynamicCompactStringFromDate:(id)a0;
+ (id)dynamicMediumStringFromDate:(id)a0;
+ (id)dynamicStringFromDate:(id)a0 isCompact:(BOOL)a1;
+ (BOOL)hasRelativeFormatForDate:(id)a0;
+ (id)icalConformingStringFromDate:(id)a0;
+ (BOOL)isDate:(id)a0 withinTimeInterval:(double)a1 includePast:(BOOL)a2;
+ (BOOL)isDateWithinMonthsTime:(id)a0;
+ (BOOL)isDateWithinWeeksTime:(id)a0;
+ (id)mediumDayOfWeekDateTimeIntervalFormatter;
+ (id)nextUpcomingDateForDateComponents:(id)a0 fromDate:(id)a1;
+ (id)shortDateTimeFormatter;
+ (id)shortDateTimeStringFromDate:(id)a0 isAllDay:(BOOL)a1;
+ (id)shortDateTimeStringFromDate:(id)a0 isAllDay:(BOOL)a1 showAllDayString:(BOOL)a2;
+ (id)stringFromBirthdayComponents:(id)a0;
+ (id)stringsFromDate:(id)a0 toDate:(id)a1 isAllDay:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (void)setupFormatters;
- (void)setupFormattersWithTemplate;

@end
