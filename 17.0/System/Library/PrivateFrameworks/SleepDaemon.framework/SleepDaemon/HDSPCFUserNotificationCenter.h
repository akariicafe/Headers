@class NSString, NSMutableDictionary, HDSPEnvironment;
@protocol HKSPMutexProvider;

@interface HDSPCFUserNotificationCenter : NSObject <HDSPSource, HDSPSleepNotificationPublisher, HDSPEnvironmentAware>

@property (readonly, nonatomic) id<HKSPMutexProvider> mutexProvider;
@property (readonly, nonatomic) NSMutableDictionary *notifications;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

- (void)publishNotificationForEvent:(id)a0 userInfo:(id)a1;
- (id)_confirmTextForForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (id)initWithEnvironment:(id)a0;
- (void)environmentDidBecomeReady:(id)a0;
- (void)handleResponse:(unsigned long long)a0 forUserNotification:(id)a1;
- (void)tearDownNotificationForEventIdentifier:(id)a0;
- (void)tearDownNotifications;
- (void).cxx_destruct;
- (id)_ignoreTextForForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (id)_wakeDetectionAlertTitleForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (id)_wakeDetectionAlertBodyForAlarmEnabled:(BOOL)a0 sleepModeOn:(BOOL)a1;
- (void)_publishNotificationWithIdentifier:(id)a0 title:(id)a1 message:(id)a2 defaultButtonTitle:(id)a3 otherButtonTitle:(id)a4 bypassDND:(BOOL)a5 aboveLockScreen:(BOOL)a6 actionHandler:(id /* block */)a7;
- (void)_withLock:(id /* block */)a0;
- (void)_publishWakeDetectionNotificationForUserInfo:(id)a0;

@end
