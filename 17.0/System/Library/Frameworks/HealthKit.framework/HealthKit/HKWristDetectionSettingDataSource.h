@class HKWristDetectionSettingManager;

@interface HKWristDetectionSettingDataSource : HKObserverBridge

@property (readonly, nonatomic) HKWristDetectionSettingManager *wristDetectionSettingManager;

- (void)unregisterBridgedObserver:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithWristDetectionSettingManager:(id)a0;
- (id)makeAndRegisterBridgedObserverForKey:(id)a0 handle:(id)a1;

@end
