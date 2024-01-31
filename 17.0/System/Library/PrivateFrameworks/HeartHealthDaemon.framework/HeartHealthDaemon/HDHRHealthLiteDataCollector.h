@class CMCatherineFeeder, NSString, HDDeviceEntity, HDDataCollectorConfiguration, HDTachycardiaDataAggregator, HDProfile, HDHeartRateDataAggregator, NSObject, HDBradycardiaDataAggregator, HDDataCollectorState;
@protocol OS_dispatch_queue;

@interface HDHRHealthLiteDataCollector : NSObject <HDDiagnosticObject, HDHealthDaemonReadyObserver, HDDataCollector, HDHeartRateDataCollector> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _heartRateEnabledInPrivacy;
    int _privacyPreferencesNotificationToken;
    HDHeartRateDataAggregator *_heartRateAggregator;
    HDTachycardiaDataAggregator *_tachycardiaAggregator;
    HDBradycardiaDataAggregator *_bradycardiaAggregator;
    HDDataCollectorConfiguration *_heartRateCollectionConfiguration;
    HDDataCollectorConfiguration *_tachycardiaCollectionConfiguration;
    HDDataCollectorConfiguration *_bradycardiaCollectionConfiguration;
    HDDataCollectorState *_heartRateCollectionState;
    HDDataCollectorState *_tachycardiaCollectionState;
    HDDataCollectorState *_bradycardiaCollectionState;
    CMCatherineFeeder *_catherineFeeder;
    HDDeviceEntity *_localDeviceEntity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (id)diagnosticDescription;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (id)identifierForDataAggregator:(id)a0;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (void).cxx_destruct;
- (id)sourceForDataAggregator:(id)a0;
- (void)dataCollector:(id)a0 didCollectHeartRate:(id)a1 device:(id)a2 source:(id)a3;
- (void)_queue_updateAllCollectionTypes;
- (void)_assertionManagerStateChanged:(id)a0;
- (void)_queue_createHealthLiteManager;
- (BOOL)_queue_hasHeartRateClientsWithoutWorkouts;
- (void)_queue_privacyPreferencesDidChange;
- (BOOL)_queue_shouldStreamReducedRateHeartRateUpdates;
- (void)_queue_updateBradycardiaCollectionType;
- (void)_queue_updateHeartRateCollectionType;
- (void)_queue_updateTachycardiaCollectionType;
- (void)_registerPowerLogEvent:(id)a0;
- (void)_setCatherineFeeder:(id)a0;
- (void)_startObservingAssertionManagerChanges;
- (void)_startObservingCurrentWorkoutChanges;
- (void)_workoutManagerStateDidChange;
- (id)deviceForDataAggregator:(id)a0;

@end
