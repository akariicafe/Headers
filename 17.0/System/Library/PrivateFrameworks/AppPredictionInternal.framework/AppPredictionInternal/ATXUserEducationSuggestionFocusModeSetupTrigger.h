@class BPSSink, NSHashTable, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXUserEducationSuggestionFocusModeSetupTrigger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_inferredModeScheduler;
    BPSSink *_inferredModeStreamSink;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (id)init;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (BOOL)modeHasPassedPastInferenceTest:(unsigned long long)a0;
- (BOOL)modeIsEligibleForSetupPrediction:(unsigned long long)a0;
- (void)processNewInferredModeEvent:(id)a0;
- (void)resetUserDefaultsIfNecessaryForDNDSemanticType:(long long)a0;
- (void)resetUserDefaultsIfNecessaryForMode:(unsigned long long)a0;

@end
