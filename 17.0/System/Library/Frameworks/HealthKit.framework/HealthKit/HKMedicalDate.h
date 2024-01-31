@class NSString, NSDate;

@interface HKMedicalDate : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *underlyingDate;
@property (readonly, nonatomic) long long form;
@property (readonly, copy, nonatomic) NSString *originalTimeZoneString;
@property (readonly, copy, nonatomic) NSDate *dateForUTC;

+ (id)_adjustDate:(id)a0 calendar:(id)a1 form:(long long)a2;
+ (unsigned long long)_calendarUnitForForm:(long long)a0;
+ (id)_descriptionForForm:(long long)a0;
+ (id)_medicalDateWithForm:(long long)a0 underlyingDate:(id)a1 originalTimeZoneString:(id)a2;
+ (BOOL)_validForm:(long long)a0;
+ (id)medicalDateFromComponents:(id)a0 originalTimeZoneString:(id)a1 form:(long long)a2 error:(id *)a3;
+ (id)medicalDateFromDate:(id)a0 originalTimeZone:(id)a1;
+ (id)medicalDateWithYear:(long long)a0 error:(id *)a1;
+ (id)medicalDateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 error:(id *)a3;
+ (id)medicalDateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 nanosecond:(long long)a6 originalTimeZoneString:(id)a7 error:(id *)a8;
+ (id)medicalDateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 hour:(long long)a3 minute:(long long)a4 second:(long long)a5 originalTimeZoneString:(id)a6 error:(id *)a7;
+ (id)medicalDateWithYear:(long long)a0 month:(long long)a1 error:(id *)a2;
+ (id)referenceCalendar;
+ (id)referenceCalendarWithLocalTimezone;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithForm:(long long)a0 underlyingDate:(id)a1 originalTimeZoneString:(id)a2;
- (id)adjustedDateForCalendar:(id)a0;
- (BOOL)isCompatibleWithMedicalDateForm:(long long)a0;

@end
