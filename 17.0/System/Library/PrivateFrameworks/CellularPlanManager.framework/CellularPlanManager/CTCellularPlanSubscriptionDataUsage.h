@class NSString;

@interface CTCellularPlanSubscriptionDataUsage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double dataUsed;
@property (readonly, nonatomic) double dataCapacity;
@property (readonly, nonatomic) NSString *dataCategory;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCategory:(id)a0 andDataUsed:(double)a1 andDataCapacity:(double)a2;

@end
