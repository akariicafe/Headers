@class NSString, AFSpeechRecordingAlertBehavior, AFSpeechRecordingAlertPolicy;

@interface _AFSpeechRecordingAlertPolicyMutation : NSObject <AFSpeechRecordingAlertPolicyMutating> {
    AFSpeechRecordingAlertPolicy *_base;
    AFSpeechRecordingAlertBehavior *_startingAlertBehavior;
    AFSpeechRecordingAlertBehavior *_stoppedAlertBehavior;
    AFSpeechRecordingAlertBehavior *_stoppedWithErrorAlertBehavior;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasStartingAlertBehavior : 1; unsigned char hasStoppedAlertBehavior : 1; unsigned char hasStoppedWithErrorAlertBehavior : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void).cxx_destruct;
- (id)getStartingAlertBehavior;
- (id)getStoppedAlertBehavior;
- (id)getStoppedWithErrorAlertBehavior;
- (void)setStartingAlertBehavior:(id)a0;
- (void)setStoppedAlertBehavior:(id)a0;
- (void)setStoppedWithErrorAlertBehavior:(id)a0;

@end
