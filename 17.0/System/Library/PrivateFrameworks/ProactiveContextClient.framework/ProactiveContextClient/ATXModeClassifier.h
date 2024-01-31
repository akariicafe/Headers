@class BMInferredModeStream, ATXMicrolocationRecordingTrigger, ATXConfiguredModeService, ATXModeHeuristicClassifier, CLLocationManager, _PASQueueLock, NSObject, ATXModeAnchorModelSuggestionServer, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue;

@interface ATXModeClassifier : NSObject <ATXModeClassifierClientModelDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    _PASQueueLock *_lock;
    BMInferredModeStream *_inferredModeStream;
    ATXConfiguredModeService *_modeService;
    ATXModeAnchorModelSuggestionServer *_anchorModelSuggestionServer;
    ATXModeHeuristicClassifier *_heuristicModeClassifier;
    ATXMicrolocationRecordingTrigger *_microlocationRecordingTrigger;
    _PASSimpleCoalescingTimer *_modeExpirationTimer;
    CLLocationManager *_locationManager;
}

+ (void)provideModeClassifierWhenReadyWithDuetHelper:(id)a0 block:(id /* block */)a1;
+ (id)updateModeWithUUID:(id)a0 userModeName:(id)a1 modeType:(unsigned long long)a2 modeOrigin:(long long)a3 originAnchorType:(id)a4 originBundleId:(id)a5 uiLocation:(unsigned long long)a6 confidenceScore:(double)a7 serializedTriggers:(id)a8 allowsSmartEntry:(BOOL)a9 shouldSuggestTriggers:(BOOL)a10 currentMode:(id)a11 stream:(id)a12;

- (id)init;
- (id)initWithDuetHelper:(id)a0;
- (id)currentMode;
- (void).cxx_destruct;
- (void)_expireMode;
- (BOOL)_isModeType:(unsigned long long)a0 uuid:(id)a1 sameAsModeFromEvent:(id)a2;
- (void)_setUpModeExpirationTimerIfNeededWithModeOrigin:(long long)a0;
- (BOOL)_shouldUpdateMode:(long long)a0 currentModeScore:(id)a1 newModeOrigin:(long long)a2 newModeScore:(id)a3;
- (void)_updateWithGuardedData:(id)a0 newModeUUID:(id)a1 userModeName:(id)a2 modeType:(unsigned long long)a3 modeOrigin:(long long)a4 originBundleId:(id)a5 originAnchorType:(id)a6 uiLocation:(unsigned long long)a7 confidenceScore:(double)a8 serializedTriggers:(id)a9 allowsSmartEntry:(BOOL)a10 shouldSuggestTriggers:(BOOL)a11;
- (void)_updateWithNewModeUUID:(id)a0 userModeName:(id)a1 modeType:(unsigned long long)a2 modeOrigin:(long long)a3 originBundleId:(id)a4 originAnchorType:(id)a5 uiLocation:(unsigned long long)a6 confidenceScore:(double)a7 serializedTriggers:(id)a8 allowsSmartEntry:(BOOL)a9 shouldSuggestTriggers:(BOOL)a10;
- (void)_updateWithNewModeUUIDIfNeeded:(id)a0 userModeName:(id)a1 modeType:(unsigned long long)a2 modeOrigin:(long long)a3 originBundleId:(id)a4 originAnchorType:(id)a5 confidenceScore:(double)a6 serializedTriggers:(id)a7;
- (BOOL)allowSmartEntryWithModeUUID:(id)a0;
- (void)clientModel:(id)a0 didUpdatePredictionWithUUID:(id)a1 userModeName:(id)a2 modeType:(unsigned long long)a3 confidenceScore:(double)a4 modeOrigin:(long long)a5 originBundleId:(id)a6 originAnchorType:(id)a7 serializedTriggers:(id)a8;

@end
