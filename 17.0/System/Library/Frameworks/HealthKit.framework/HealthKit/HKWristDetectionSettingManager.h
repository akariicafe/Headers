@class HKObserverSet, NSObject;
@protocol OS_dispatch_queue, OS_os_log;

@interface HKWristDetectionSettingManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    NSObject<OS_os_log> *_loggingCategory;
    int _disableWristDetectionSettingChangeNotificationToken;
}

@property (retain, nonatomic) id pairedDeviceRegistry;
@property (readonly, nonatomic, getter=isWristDetectEnabled) BOOL wristDetectEnabled;

+ (BOOL)isWristDetectEnabled;

- (void)registerObserver:(id)a0 queue:(id)a1;
- (void)_startObserving;
- (id)init;
- (void)dealloc;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (id)_activeWatchNotifications;
- (void)_pairedOrActiveDevicesDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithPairedDeviceRegistry:(id)a0;
- (void)_queue_notifyObservers;
- (void)_stopObserving;
- (void)_queue_settingDidChange;

@end
