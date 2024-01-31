@class NSString;

@interface TSUDateFormatter : NSObject {
    NSString *_dateOnlyFormatString;
    NSString *_timeOnlyFormatString;
    struct __CFDateFormatter { } *_fullDateFormatter;
}

+ (id)dateFormatStringSpecialSymbols;
+ (id)datePortionOfDateTimeFormatString:(id)a0;
+ (unsigned long long)p_DateTimeSplitLocationInFormatString:(id)a0;
+ (id)timePortionOfDateTimeFormatString:(id)a0;
+ (id)defaultDateTimeFormatForLocale:(id)a0;
+ (id)p_supportedDateFormatMatchingFormat:(id)a0 locale:(id)a1;
+ (id)p_supportedTimeFormatMatchingFormat:(id)a0 locale:(id)a1;
+ (id)supportedDateFormatsForLocale:(id)a0;
+ (id)supportedTimeFormatsForLocale:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;

@end
