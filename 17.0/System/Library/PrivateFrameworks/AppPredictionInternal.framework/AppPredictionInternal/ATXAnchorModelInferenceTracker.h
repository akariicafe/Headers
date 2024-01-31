@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (id)init;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;
- (void).cxx_destruct;
- (id)inferenceEventsToTryAgain;
- (void)trackInferenceStartedForInferenceEvent:(id)a0;
- (void)clearAllIncompleteInferenceEvents;
- (id)fetchPersistedInferenceEvents;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;
- (void)persistInferenceEvent:(id)a0;

@end
