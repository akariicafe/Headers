@interface RequestDispatcherBridges.AssistantSpeechRecognizerResponseHandler : RequestDispatcherBridges.SpeechRecognizerResponseHandler {
    void /* unknown type, empty encoding */ myriadMonitor;
    void /* unknown type, empty encoding */ userId;
    void /* unknown type, empty encoding */ requestQueue;
    void /* unknown type, empty encoding */ sessionState;
    void /* unknown type, empty encoding */ immutableSessionState;
    void /* unknown type, empty encoding */ resultSelectionGated;
    void /* unknown type, empty encoding */ isMUXEnabled;
    void /* unknown type, empty encoding */ isMedocEnabled;
    void /* unknown type, empty encoding */ resultSelectedMsg;
    void /* unknown type, empty encoding */ voiceIdScoreCard;
    void /* unknown type, empty encoding */ speechPartialResultsCache;
    void /* unknown type, empty encoding */ didStopASR;
    void /* unknown type, empty encoding */ hasfirstVoiceIdScoreCardArrived;
    void /* unknown type, empty encoding */ havePostedSpeechPartialDeliveryStartedMessage;
    void /* unknown type, empty encoding */ homeMembers;
    void /* unknown type, empty encoding */ isRMVEnabled;
    void /* unknown type, empty encoding */ isCandidateRequest;
    void /* unknown type, empty encoding */ isFFRequest;
    void /* unknown type, empty encoding */ bufferedResultCandidateHandler;
    void /* unknown type, empty encoding */ isUOS;
    void /* unknown type, empty encoding */ isIdentityScoreConsumptionEnabled;
    void /* unknown type, empty encoding */ isIdentityBridgeInstrumentationEnabled;
}

- (void).cxx_destruct;
- (void)localSpeechRecognizerClient:(id)a0 didAcceptedEagerResultWithRequestId:(id)a1 rcId:(unsigned long long)a2 mitigationSignal:(BOOL)a3 featuresToLog:(id)a4;
- (void)localSpeechRecognizerClient:(id)a0 didCompletionRecognitionWithStatistics:(id)a1 requestId:(id)a2 endpointMode:(long long)a3 error:(id)a4;
- (void)localSpeechRecognizerClient:(id)a0 didCompletionRecognitionWithStatistics:(id)a1 requestId:(id)a2 error:(id)a3;
- (void)localSpeechRecognizerClient:(id)a0 receivedContinuityEndDetected:(id)a1;
- (void)localSpeechRecognizerClient:(id)a0 receivedEagerRecognitionCandidateWithRequestId:(id)a1 rcId:(unsigned long long)a2 speechPackage:(id)a3 duration:(double)a4;
- (void)localSpeechRecognizerClient:(id)a0 receivedFinalResultWithRequestId:(id)a1 speechPackage:(id)a2;
- (void)localSpeechRecognizerClient:(id)a0 receivedPartialResultWithRequestId:(id)a1 language:(id)a2 tokens:(id)a3;
- (void)localSpeechRecognizerClient:(id)a0 receivedTRPCandidatePackage:(id)a1;
- (void)localSpeechRecognizerClient:(id)a0 receivedTRPDetected:(id)a1;
- (void)localSpeechRecognizerClient:(id)a0 receivedVoiceIdScoreCard:(id)a1;
- (void)localSpeechRecognizerClient:(id)a0 requestAttentionAssetDownload:(BOOL)a1;

@end
