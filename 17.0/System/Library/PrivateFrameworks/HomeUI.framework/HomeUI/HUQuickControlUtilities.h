@interface HUQuickControlUtilities : NSObject

+ (id)backgroundColorForUserInterfaceStyle:(long long)a0;
+ (unsigned long long)iconSizeForQuickControlSize:(unsigned long long)a0;
+ (unsigned long long)quickControlStepperViewSizeForViewSizeSubclass:(long long)a0;
+ (BOOL)shouldAlwaysDisplayQuickControlAsSwitch:(id)a0;
+ (BOOL)shouldDisplayQuickControlAsPushButton:(id)a0 preferredControl:(unsigned long long)a1;
+ (unsigned long long)sliderQuickControlSizeForViewSizeSubclass:(long long)a0;

@end
