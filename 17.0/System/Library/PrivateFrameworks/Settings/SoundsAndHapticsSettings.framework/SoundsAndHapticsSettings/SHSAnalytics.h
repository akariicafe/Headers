@interface SHSAnalytics : NSObject

+ (void)trackingDualSIMToneValueChanged:(id)a0 didSelectDifferentTones:(BOOL)a1;
+ (void)trackingVibrateOnRingValueChanged:(BOOL)a0 age:(unsigned long long)a1;
+ (void)trackingVibrateOnSilentValueChanged:(BOOL)a0 age:(unsigned long long)a1;

@end
