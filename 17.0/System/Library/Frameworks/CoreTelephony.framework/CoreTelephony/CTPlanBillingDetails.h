@class NSString, NSNumber;

@interface CTPlanBillingDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *planName;
@property (readonly, nonatomic) NSNumber *planCost;
@property (readonly, nonatomic) NSString *planCurrency;
@property (readonly, nonatomic) NSNumber *planDataAmount;
@property (readonly, nonatomic) unsigned long long planDataMeasureUnit;
@property (readonly, nonatomic) unsigned long long planType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 PlanCost:(id)a1 PlanCurrency:(id)a2 PlanDataAmount:(id)a3 PlanDataMeasureUnit:(unsigned long long)a4 PlanType:(unsigned long long)a5;

@end
