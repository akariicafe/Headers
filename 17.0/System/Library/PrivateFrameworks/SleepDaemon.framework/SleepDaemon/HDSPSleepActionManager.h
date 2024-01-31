@class NSString, HDSPEnvironment, HKSPObserverSet;

@interface HDSPSleepActionManager : NSObject <HDSPSource, HDSPEnvironmentAware>

@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment;

+ (BOOL)_isValidSnoozeDate:(id)a0;
+ (id)_latestDateInAlarms:(id)a0 dateBlock:(id /* block */)a1;

- (void)sleepAlarmSnoozedUntilDate:(id)a0 source:(unsigned long long)a1;
- (void)removeObserver:(id)a0;
- (id)initWithEnvironment:(id)a0;
- (void)confirmAwakeNotificationOnDate:(id)a0 confirmUntilDate:(id)a1;
- (void)dismissSleepLock;
- (void)dismissGoodMorningOnDate:(id)a0;
- (void)sleepAlarmWasModified;
- (void).cxx_destruct;
- (void)dismissGoodMorning;
- (void)confirmAwakeNotificationOnDate:(id)a0;
- (void)confirmAwakeNotification;
- (void)addObserver:(id)a0;
- (void)sleepAlarmDismissedOnDate:(id)a0 source:(unsigned long long)a1;

@end
