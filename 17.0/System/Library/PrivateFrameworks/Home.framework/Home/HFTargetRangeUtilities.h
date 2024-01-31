@interface HFTargetRangeUtilities : NSObject

+ (unsigned long long)rangeModeForHeatingCoolingMode:(long long)a0;
+ (unsigned long long)rangeModeForCurrentHeaterCoolerState:(long long)a0;
+ (unsigned long long)rangeModeForCurrentHumidifierDehumidifierState:(long long)a0;
+ (unsigned long long)rangeModeForTargetHeaterCoolerState:(long long)a0;
+ (unsigned long long)rangeModeForTargetHumidifierDehumidifierState:(long long)a0;
+ (id)targetRelativePercentValueWithTargetMode:(unsigned long long)a0 currentMode:(unsigned long long)a1 rawTargetRelativePercentValue:(id)a2 minimumThresholdRelativePercentValue:(id)a3 maximumThresholdRelativePercentValue:(id)a4;
+ (id)targetRelativePercentValueWithTargetMode:(unsigned long long)a0 currentMode:(unsigned long long)a1 rawTargetResponse:(id)a2 minimumThresholdResponse:(id)a3 maximumThresholdResponse:(id)a4;
+ (id)targetValueForService:(id)a0 valueProvider:(id /* block */)a1;
+ (id)targetValueWithTargetMode:(unsigned long long)a0 currentMode:(unsigned long long)a1 rawTargetResponse:(id)a2 minimumThresholdResponse:(id)a3 maximumThresholdResponse:(id)a4;

@end
