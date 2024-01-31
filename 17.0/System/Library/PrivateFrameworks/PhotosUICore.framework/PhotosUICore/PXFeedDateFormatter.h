@class NSCalendar, NSString, NSDateFormatter, NSDate, NSLocale;

@interface PXFeedDateFormatter : NSObject {
    BOOL _prepared;
    NSLocale *_locale;
    BOOL _ignoreWhitelist;
    NSCalendar *_calendar;
    NSDate *_today;
    NSDate *_yesterday;
    NSString *_todayString;
    NSString *_yesterdayString;
    NSDateFormatter *_dateFormatterForCurrentYear;
    NSDateFormatter *_dateFormatterForNoncurrentYears;
}

+ (id)defaultFeedSectionDateFormatter;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (id)stringFromDate:(id)a0;
- (void)_prepare;
- (void).cxx_destruct;
- (void)_currentLocaleChanged:(id)a0;
- (BOOL)isDateInToday:(id)a0;
- (id)initWithLocale:(id)a0 ignoreWhitelist:(BOOL)a1;
- (BOOL)isDateInFuture:(id)a0;
- (void)_calendarDayChanged:(id)a0;
- (BOOL)_canSubstitueDateStringsWithLocale:(id)a0;
- (id)_completeRelativeStringForDate:(id)a0 dateFormatter:(id)a1;

@end
