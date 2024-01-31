@class NSString;

@interface TSUDateFormatter : NSObject {
    NSString *mDateOnlyFormatString;
    NSString *mTimeOnlyFormatString;
    struct __CFDateFormatter { } *mFullDateFormatter;
}

+ (id)dateFormatStringSpecialSymbols;
+ (id)datePortionOfDateTimeFormatString:(id)a0;
+ (id)defaultDateTimeFormat;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)a0;
+ (id)shortMonthNamesForNonCachedCurrentLocale;
+ (id)supportedDateFormats;
+ (id)supportedTimeFormats;
+ (id)timePortionOfDateTimeFormatString:(id)a0;

- (id)init;
- (void)dealloc;
- (id)fullDateString:(id)a0;
- (id)appropriateOutputFormatStringForInputFormatString:(id)a0;
- (id)stringFromDate:(id)a0 format:(id)a1;

@end
