@class MOApplication;

@interface MOEffectiveOptionalApplication : NSObject

@property (readonly) MOApplication *value;
@property (readonly) MOApplication *defaultValue;

- (id)initWithValue:(id)a0 defaultValue:(id)a1;
- (void).cxx_destruct;

@end
