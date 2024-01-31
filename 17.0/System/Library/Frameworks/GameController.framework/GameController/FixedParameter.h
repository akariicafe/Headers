@interface FixedParameter : NSObject

@property (readonly, nonatomic) int identifier;
@property (readonly, nonatomic) float value;

- (id)initWithIdentifier:(int)a0 value:(float)a1;
- (id)description;

@end
