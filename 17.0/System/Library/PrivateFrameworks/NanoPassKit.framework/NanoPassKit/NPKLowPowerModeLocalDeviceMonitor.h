@class NSString, NPKObserverManager;

@interface NPKLowPowerModeLocalDeviceMonitor : NSObject <NPKLowPowerModeMonitor> {
    NPKObserverManager *_observersManager;
}

@property (readonly, nonatomic, getter=isLowPowerModeEnabled) BOOL lowPowerModeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)initWithNotificationCenter:(id)a0;
- (void).cxx_destruct;
- (void)_lowPowerModeStateChanged:(id)a0;
- (void)_sendLowPowerModeEnabled:(BOOL)a0 toObserver:(id)a1;
- (void)_sendLowPowerModeEnabledStateToObservers:(BOOL)a0;

@end
