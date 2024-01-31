@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double timeIntervalSinceReferenceDate;

+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)dateWithNaturalLanguageString:(id)a0 date:(id)a1 locale:(id)a2;
+ (id)dateWithNaturalLanguageString:(id)a0;
+ (id)dateWithNaturalLanguageString:(id)a0 locale:(id)a1;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)now;
+ (double)timeIntervalSinceReferenceDate;
+ (id)date;
+ (id)distantPast;
+ (id)distantFuture;
+ (id)dateWithTimeInterval:(double)a0 sinceDate:(id)a1;
+ (id)dateWithTimeIntervalSince1970:(double)a0;
+ (id)dateWithTimeIntervalSinceNow:(double)a0;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)a0;
+ (id)dateWithString:(id)a0;
+ (id)dateWithDate:(id)a0;

- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)_web_RFC1123DateString;
- (long long)_web_compareDay:(id)a0;
- (BOOL)_web_isToday;
- (id)dateWithCalendarFormat:(id)a0 timeZone:(id)a1;
- (id)descriptionWithCalendarFormat:(id)a0 timeZone:(id)a1 locale:(id)a2;
- (double)bucketToRoundingFactor:(unsigned int)a0;
- (double)timeIntervalSince1970WithBucket:(unsigned int)a0;
- (unsigned long long)_cfTypeID;
- (unsigned long long)hash;
- (id)earlierDate:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (double)timeIntervalSince1970;
- (id)descriptionWithLocale:(id)a0;
- (id)description;
- (id)initWithDate:(id)a0;
- (id)initWithString:(id)a0;
- (id)laterDate:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isNSDate__;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)addTimeInterval:(double)a0;
- (BOOL)isEqualToDate:(id)a0;
- (double)timeIntervalSinceDate:(id)a0;
- (id)dateByAddingTimeInterval:(double)a0;
- (id)initWithTimeInterval:(double)a0 sinceDate:(id)a1;
- (long long)compare:(id)a0 toUnitGranularity:(unsigned long long)a1;
- (id)initWithTimeIntervalSince1970:(double)a0;
- (id)initWithTimeIntervalSinceNow:(double)a0;
- (BOOL)isEqual:(id)a0 toUnitGranularity:(unsigned long long)a1;
- (BOOL)isInSameDayAsDate:(id)a0;
- (BOOL)isInToday;
- (BOOL)isInTomorrow;
- (BOOL)isInYesterday;
- (double)timeIntervalSinceNow;

@end
