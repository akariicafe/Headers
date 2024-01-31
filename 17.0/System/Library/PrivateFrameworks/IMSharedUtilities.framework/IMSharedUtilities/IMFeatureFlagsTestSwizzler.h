@class IMSwizzledMethod;

@interface IMFeatureFlagsTestSwizzler : NSObject

@property (readonly, nonatomic) SEL feature;
@property (readonly, nonatomic) IMSwizzledMethod *originalMethod;
@property (readonly, nonatomic) IMSwizzledMethod *replacementMethod;
@property (readonly, nonatomic) SEL testMethod;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic, getter=isSwizzled) BOOL swizzled;

- (void)swizzle;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFeature:(SEL)a0 enabled:(BOOL)a1;
- (void)unswizzle;

@end
