@interface RequestDispatcherBridges.AttendingStatesServiceHandler : NSObject <LBAttendingStatesServiceDelegate> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ assistantId;
    void /* unknown type, empty encoding */ sessionId;
    void /* unknown type, empty encoding */ messagePublisher;
    void /* unknown type, empty encoding */ candidateRequestCacheManager;
}

- (id)init;
- (void).cxx_destruct;
- (void)localAttendingStarted;
- (void)localAttendingStartedWithRootRequestId:(id)a0;
- (void)localAttendingStoppedUnexpectedlyWithError:(id)a0;
- (void)localAttendingWillStartWithRootRequestId:(id)a0;
- (void)speechRecognizerReadyForNewTurnWithSpeechStartDetectedAtHostTime:(unsigned long long)a0 audioRecordType:(long long)a1 audioRecordDeviceId:(id)a2;
- (void)speechStartDetectedWithHostTime:(unsigned long long)a0 audioRecordType:(long long)a1 audioRecordDeviceId:(id)a2;
- (void)speechStartDetectedWithShouldDuckTTS:(BOOL)a0;

@end
