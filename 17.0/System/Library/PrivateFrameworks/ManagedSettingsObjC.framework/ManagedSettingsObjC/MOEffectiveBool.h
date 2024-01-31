@interface MOEffectiveBool : NSObject

@property (readonly) BOOL value;
@property (readonly) BOOL defaultValue;

- (id)initWithValue:(BOOL)a0 defaultValue:(BOOL)a1;

@end
