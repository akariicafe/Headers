@class HKCountrySet;

@interface HDOTAFeatureAvailabilityInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKCountrySet *allowedCountrySet;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAllowedCountrySet:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
