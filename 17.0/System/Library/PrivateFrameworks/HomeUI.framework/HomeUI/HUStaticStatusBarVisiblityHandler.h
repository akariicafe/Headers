@class NSString;

@interface HUStaticStatusBarVisiblityHandler : NSObject <HUStatusBarVisibilityHandling>

@property (readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setStatusBarHidden:(BOOL)a0 withAnimationSettings:(id)a1;

@end
