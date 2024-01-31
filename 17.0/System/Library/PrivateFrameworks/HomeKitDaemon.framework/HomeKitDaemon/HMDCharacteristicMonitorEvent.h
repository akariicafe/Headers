@interface HMDCharacteristicMonitorEvent : HMDCharacteristicEvent

+ (id)logCategory;

- (id)description;
- (BOOL)_compareEventValue:(id)a0;
- (BOOL)_evaluateNewValue:(id)a0;
- (BOOL)isCompatibleWithEvent:(id)a0;

@end
