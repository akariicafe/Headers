@interface SUICAudioPowerLevelLinearConverter : NSObject

+ (float)linearValueForOutputPowerLevel:(float)a0;
+ (float)_adjustedLinearPowerLevel:(float)a0 isInput:(BOOL)a1;
+ (float)_expectedLinearInputPowerLevelMaximum;
+ (float)_linearValueForPowerLevel:(float)a0 shouldAdjustForDeviceType:(BOOL)a1 isInput:(BOOL)a2;
+ (float)linearValueForInputPowerLevel:(float)a0;

@end
