@interface MOEffectiveInteger : NSObject

@property (readonly) long long value;
@property (readonly) long long defaultValue;

- (id)initWithValue:(long long)a0 defaultValue:(long long)a1;

@end
