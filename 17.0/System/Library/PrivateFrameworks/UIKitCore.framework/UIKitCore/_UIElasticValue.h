@interface _UIElasticValue : NSObject

@property (nonatomic) double currentValue;
@property (nonatomic) double targetValue;
@property (nonatomic) double speed;
@property (readonly, nonatomic, getter=isSteady) BOOL steady;
@property (nonatomic) double friction;
@property (nonatomic) double momentum;

- (void)update:(double)a0;
- (id)init;
- (id)initWithValue:(double)a0;
- (id)description;
- (void)updateFromDisplayLink:(id)a0;

@end
