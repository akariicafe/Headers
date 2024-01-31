@interface PKAccountEnhancedMerchantBehavior : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double minRefreshPeriod;
@property (nonatomic) double shortMinRefreshPeriod;
@property (nonatomic) double longMinRefreshPeriod;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)cooldownPeriodForLevel:(unsigned long long)a0;
- (id)initWithMinRefreshPeriod:(id)a0;
- (BOOL)isEqualToAccountEnhancedMerchantBehavior:(id)a0;

@end
