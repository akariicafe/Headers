@class HKQuantity;

@interface HKLensSpecification : NSObject

@property (readonly, copy, nonatomic) HKQuantity *sphere;
@property (readonly, copy, nonatomic) HKQuantity *cylinder;
@property (readonly, copy, nonatomic) HKQuantity *axis;
@property (readonly, copy, nonatomic) HKQuantity *addPower;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_initWithSphere:(id)a0 cylinder:(id)a1 axis:(id)a2 addPower:(id)a3;

@end
