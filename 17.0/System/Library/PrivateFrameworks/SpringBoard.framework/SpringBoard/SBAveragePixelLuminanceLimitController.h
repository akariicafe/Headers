@class NSString, UIView;

@interface SBAveragePixelLuminanceLimitController : NSObject <CAAnimationDelegate>

@property (nonatomic, getter=isGlobalFilter) BOOL globalFilter;
@property (weak, nonatomic) UIView *targetView;
@property (nonatomic, getter=areAplLimitsEnabled) BOOL aplLimitsEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void).cxx_destruct;
- (void)_addFilter;
- (void)_removeFilter;
- (id)_targetLayer;

@end
