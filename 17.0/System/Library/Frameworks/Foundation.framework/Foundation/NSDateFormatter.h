@class NSTimeZone, NSString, NSCalendar, NSArray, NSLocale, NSDate, NSMutableDictionary;

@interface NSDateFormatter : NSFormatter <NSObservable, NSObserver> {
    NSMutableDictionary *_attributes;
    struct __CFDateFormatter { } *_formatter;
    unsigned long long _counter;
    long long _cacheGeneration;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class) unsigned long long defaultFormatterBehavior;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property long long formattingContext;
@property (copy) NSString *dateFormat;
@property unsigned long long dateStyle;
@property unsigned long long timeStyle;
@property (copy) NSLocale *locale;
@property BOOL generatesCalendarDates;
@property unsigned long long formatterBehavior;
@property (copy) NSTimeZone *timeZone;
@property (copy) NSCalendar *calendar;
@property (getter=isLenient) BOOL lenient;
@property (copy) NSDate *twoDigitStartDate;
@property (copy) NSDate *defaultDate;
@property (copy) NSArray *eraSymbols;
@property (copy) NSArray *monthSymbols;
@property (copy) NSArray *shortMonthSymbols;
@property (copy) NSArray *weekdaySymbols;
@property (copy) NSArray *shortWeekdaySymbols;
@property (copy) NSString *AMSymbol;
@property (copy) NSString *PMSymbol;
@property (copy) NSArray *longEraSymbols;
@property (copy) NSArray *veryShortMonthSymbols;
@property (copy) NSArray *standaloneMonthSymbols;
@property (copy) NSArray *shortStandaloneMonthSymbols;
@property (copy) NSArray *veryShortStandaloneMonthSymbols;
@property (copy) NSArray *veryShortWeekdaySymbols;
@property (copy) NSArray *standaloneWeekdaySymbols;
@property (copy) NSArray *shortStandaloneWeekdaySymbols;
@property (copy) NSArray *veryShortStandaloneWeekdaySymbols;
@property (copy) NSArray *quarterSymbols;
@property (copy) NSArray *shortQuarterSymbols;
@property (copy) NSArray *standaloneQuarterSymbols;
@property (copy) NSArray *shortStandaloneQuarterSymbols;
@property (copy) NSDate *gregorianStartDate;
@property BOOL doesRelativeDateFormatting;

+ (void)initialize;
+ (id)_componentsFromFormatString:(id)a0;
+ (id)_formatStringFromComponents:(id)a0;
+ (id)dateFormatFromTemplate:(id)a0 options:(unsigned long long)a1 locale:(id)a2;
+ (id)localizedStringFromDate:(id)a0 dateStyle:(unsigned long long)a1 timeStyle:(unsigned long long)a2;

- (void)receiveObservedValue:(id)a0;
- (id)init;
- (void)dealloc;
- (id)stringForObjectValue:(id)a0;
- (void)_invalidateCache;
- (void)_reset;
- (void)encodeWithCoder:(id)a0;
- (void)_clearFormatter;
- (id)stringFromDate:(id)a0;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (id)dateFromString:(id)a0;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setDateFormat:(id)a0;
- (id)_attributedStringWithFieldsFromDate:(id)a0;
- (long long)_cacheGenerationCount;
- (id)_dateFormat;
- (id)_getLocaleAlreadyLocked:(BOOL)a0;
- (id)_locale_forOldMethods;
- (id)_nextChangeDateAfterDate:(id)a0;
- (void)_regenerateFormatter;
- (void)_regenerateFormatterIfAbsent;
- (void)_setDateFormat:(id)a0 alreadyLocked:(BOOL)a1;
- (void)_setIsLenient:(BOOL)a0;
- (void)_setUsesCharacterDirection:(BOOL)a0;
- (id)_timeZone_forOldMethods;
- (BOOL)_tracksCacheGenerationCount;
- (BOOL)_usesCharacterDirection;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 range:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a2 error:(out id *)a3;
- (void)setLocalizedDateFormatFromTemplate:(id)a0;

@end
