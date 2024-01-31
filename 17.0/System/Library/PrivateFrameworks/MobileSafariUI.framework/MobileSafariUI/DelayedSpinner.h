@interface DelayedSpinner : NSObject

+ (void)hide;
+ (void)_setShowStatusBarSpinner:(BOOL)a0 withDelay:(double)a1;
+ (void)_setShowStatusBarSpinnerTimer:(id)a0;
+ (void)_showStatusBarSpinner:(id)a0;
+ (void)showWithDelay;

@end
