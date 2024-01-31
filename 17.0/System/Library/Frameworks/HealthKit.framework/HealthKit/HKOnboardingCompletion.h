@class NSUUID, NSString, NSDate;

@interface HKOnboardingCompletion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) long long version;
@property (readonly, copy, nonatomic) NSDate *completionDate;
@property (readonly, copy, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long countryCodeProvenance;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeatureIdentifier:(id)a0 version:(long long)a1 completionDate:(id)a2 countryCode:(id)a3 countryCodeProvenance:(long long)a4;
- (id)initWithFeatureIdentifier:(id)a0 version:(long long)a1 completionDate:(id)a2 countryCode:(id)a3 countryCodeProvenance:(long long)a4 UUID:(id)a5;

@end
