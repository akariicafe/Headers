@interface PKAccountPromotionBehavior : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double minRefreshPeriod;
@property (nonatomic) long long maxImpressionCount;
@property (nonatomic) double timeVisibleAfterCompleted;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMinRefreshPeriod:(id)a0 maxImpressionCount:(id)a1 timeVisibleAfterCompleted:(id)a2;
- (BOOL)isEqualToAccountPromotionBehavior:(id)a0;

@end
