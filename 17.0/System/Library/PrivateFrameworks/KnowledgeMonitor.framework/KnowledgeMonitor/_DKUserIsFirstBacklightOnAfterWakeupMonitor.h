@class NSString, _DKEvent, NSDateInterval, NSDate;

@interface _DKUserIsFirstBacklightOnAfterWakeupMonitor : _DKMonitor <_DKNotificationReceiver, _DKInstantMonitor, _DKHistoricalMonitor> {
    NSDateInterval *eligibleForNotification;
    int displayStatusNotifyToken;
    int internalSettingChangedNotificationToken;
    BOOL _enabled;
}

@property (nonatomic) BOOL FirstWakeUINotificationEnabled;
@property (nonatomic) BOOL SoftwareUpdateUINotificationEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ instantHandler;
@property (readonly, nonatomic) _DKEvent *currentEvent;
@property (copy, nonatomic) id /* block */ historicalHandler;
@property (copy, nonatomic) id /* block */ shutdownHandler;
@property (readonly, nonatomic) NSDate *lastUpdate;

+ (id)eventStream;
+ (id)prettyPrintDateAsLocalTime:(id)a0;
+ (id)fetchMostRecentPastEventForStream:(id)a0;
+ (id)fetchMostRecentlyStoredScreenLockEventOnlyIfValueIsUnlocked;

- (void)unregisterHandleBacklightEvents;
- (void)dealloc;
- (void)showFirstWakeupUINotification;
- (void)showSoftwareUpdateUINotification;
- (void)handleBacklightTurnedOffEvent;
- (void)handleBacklightTurnedOnEvent;
- (void)start;
- (void)setupNotificationEligiblityPeriod;
- (BOOL)didQualifyingScreenLockEndInEligibilityPeriod;
- (void)stop;
- (id)getNextSWUpdatePrediction;
- (void)setInternalSettingsChangedNotficationHandler;
- (BOOL)isInternalBuild;
- (void).cxx_destruct;
- (BOOL)isFirstBacklightOn;
- (void)showUINotification:(id)a0;
- (id)firstWakeupEventWithValue:(BOOL)a0;
- (BOOL)eligibleForFirstWakeUINotification;
- (id)convertUTCToLocalTimeString:(id)a0;
- (void)handleScreenUnlockEvent;
- (void)setUINotificationEligibility;
- (BOOL)isUINotificationEnabledForKey:(id)a0;
- (void)recordFirstWakeup:(id)a0;
- (void)deactivate;
- (void)receiveNotificationEvent:(id)a0;
- (void)registerHandleBacklightEvents;

@end
