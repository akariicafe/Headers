@class NSString;

@interface HKMedicationLoggingUnit : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long loggingUnitCode;
@property (readonly, copy, nonatomic) NSString *fallbackLoggingUnitSingularString;
@property (readonly, copy, nonatomic) NSString *fallbackLoggingUnitPluralString;

+ (id)loggingUnitByResolvingSingularLoggingUnitString:(id)a0 fallbackPluralLoggingUnitString:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyByOverridingFallbackLoggingUnitSingularString:(id)a0 fallbackLoggingUnitPluralString:(id)a1;
- (id)initWithLoggingUnitCode:(unsigned long long)a0;

@end
