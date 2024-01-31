@class CMPocketStateManager, AFRemoteRequestWatcher, INAppIntentDeliverer, AFRequestInfo;

@interface SASRemoteRequestManager : NSObject

@property (retain, nonatomic) AFRemoteRequestWatcher *remoteRequestWatcher;
@property (retain, nonatomic) INAppIntentDeliverer *currentAppIntentDeliverer;
@property (nonatomic) unsigned long long currentVoiceTriggerRestriction;
@property (nonatomic) unsigned long long pendingVoiceTriggerRestrictionCount;
@property (nonatomic) BOOL hasPendingVoiceTriggerActivation;
@property (retain, nonatomic) AFRequestInfo *pendingVoiceTriggerActivationInfo;
@property (retain, nonatomic) CMPocketStateManager *pocketStateManager;
@property (nonatomic) long long currentPocketState;

+ (id)new;
+ (id)manager;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (long long)_dismissalReasonForDeactivationReason:(long long)a0;
- (void)_handleNewRemoteRequestWithInfo:(id)a0;
- (void)_handlePendingVoiceTriggerActivationsWithInfo:(id)a0;
- (void)_handleRemotePrewarmWithInfo:(id)a0;
- (void)_handleRemoteRequestDismissalWithReason:(long long)a0 options:(unsigned long long)a1 analyticsContext:(id)a2;
- (void)_handleRequestWatcherVoiceTriggerRequestWithInfo:(id)a0;
- (void)_processPendingVoiceTriggerActivationsWithInfo:(id)a0 delay:(double)a1;
- (BOOL)_requestWatcherVoiceActivationEnabled;
- (void)_startFetchingPocketStateUpdates;

@end
