@class NSString, NSMutableDictionary, CLLocationManager, EKTimedEventStorePurger, NSObject, NSDate;
@protocol CALNRouteHypothesizerProvider, OS_dispatch_queue, OS_dispatch_source;

@interface EKTravelEngine : NSObject <CLLocationManagerDelegate> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_source> *_syncYieldTimer;
    BOOL _running;
    BOOL _needsRefresh;
    BOOL _databaseIsEncryptedAndUnreadable;
    BOOL _yieldingToSync;
    NSMutableDictionary *_eventExternalURLsToAgendaEntries;
    CLLocationManager *_locationManager;
    EKTimedEventStorePurger *_timedEventStorePurger;
    NSDate *_lastRefreshDate;
}

@property (readonly, nonatomic) id<CALNRouteHypothesizerProvider> routeHypothesizerProvider;
@property (nonatomic) BOOL authorizedInternal;
@property (copy, nonatomic) id /* block */ adviceBlock;
@property (readonly, nonatomic) BOOL authorized;
@property (copy, nonatomic) id /* block */ authorizationChangedBlock;
@property (copy, nonatomic) id /* block */ eventSignificantlyChangedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)travelEligibleEventsInEventStore:(id)a0;
+ (double)requestRefreshTimeInterval;
+ (id)requestedDarwinNotifications;
+ (double)_periodicRefreshInterval;
+ (double)_travelAgendaTimeWindowInterval;
+ (id)travelEligibleEvents:(id)a0 fromStartDate:(id)a1 untilEndDate:(id)a2;

- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (void)_suggestEventLocationsSettingChanged;
- (void)receivedAlarmNamed:(id)a0;
- (void)_installPeriodicRefreshTimer;
- (void)dealloc;
- (void)start;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (void)_eventKitFeatureSetChanged;
- (BOOL)_authorizedToAcquireLocation;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)_uninstallSyncYieldTimer;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_uninstallLocationManager;
- (void)_significantTimeChangeNotificationReceived;
- (id)_eventStore;
- (void)stop;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_calDatabaseChangedNotificationReceived;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)_unregisterAllAgendaEntries;
- (BOOL)isLocationManagerStatusAuthorized:(int)a0;
- (void).cxx_destruct;
- (void)_trimAgendaEntriesBeforeDate:(id)a0 andAfterDate:(id)a1;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void)_installSyncYieldTimer;
- (BOOL)_isProtectedDataAvailable;
- (void)_updateDatabaseEncryptionState;
- (void)_refreshIfNeeded;
- (void)_installLocationManager;
- (void)_periodicRefreshTimerFired;
- (id)alarmName;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (void)handleDarwinNotification:(id)a0;
- (void)_stopInternal;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)_sendFeedbackForPostingNotificationForEventWithExternalURL:(id)a0 feedback:(id /* block */)a1;
- (void)_enableTravelAdvisoriesForAutomaticBehaviorNotificationReceived;

@end
