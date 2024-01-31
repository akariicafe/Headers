@interface AFAggregator : NSObject {
    double _startTime;
    BOOL _sessionIsRetrying;
    BOOL _retryPrefersWWAN;
}

@property (nonatomic) unsigned long long connectionType;
@property (nonatomic) BOOL hasActiveRequest;

+ (void)logDictationFollowedByContinueOccurredForLanguage:(id)a0;
+ (void)logDictationFollowedByKeyboardDeleteOccurredForLanguage:(id)a0;
+ (void)logDictationFollowedByKeyboardInputOccurredForLanguage:(id)a0;
+ (void)logKeyboardInputFollowedByContinueOccurredForLanguage:(id)a0;
+ (id)_fullAggDKeyWithPrefix:(id)a0 error:(id)a1;
+ (id)_stringForGatekeeperType:(unsigned long long)a0;
+ (void)logCDMAssetEvictedForAssetType:(id)a0 language:(id)a1;
+ (void)logCreateAssistant;
+ (void)logDESEvaluationForLanguage:(id)a0 error:(id)a1;
+ (void)logDESRecordingForLanguage:(id)a0 error:(id)a1;
+ (void)logDictationCancelled;
+ (void)logDictationFailedWithError:(id)a0;
+ (void)logDictationStarted;
+ (void)logDictationSucceeded;
+ (void)logEnabledState:(unsigned long long)a0;
+ (void)logHomeButtonPressToActivationDuration:(double)a0;
+ (void)logLoadAssistant;
+ (void)logLocalFinalSpeechRecognitionWithDuration:(double)a0;
+ (void)logLocalRecognitionAssetEvictedForLanguage:(id)a0;
+ (void)logLocalRecognitionLoadedForLanguage:(id)a0 duration:(double)a1;
+ (void)logLocalRecognitionLostForLanguage:(id)a0;
+ (void)logLocalRecognitionWonForLanguage:(id)a0;
+ (void)logLocalSpeechStartedWithDuration:(double)a0;
+ (void)logPingTimeout;
+ (void)logRequestCancelAfterSeconds:(double)a0;
+ (void)logRequestCompletedWithDuration:(double)a0;
+ (void)logRequestLaunchedApp;
+ (void)logSiriInvokedVia:(long long)a0;
+ (void)logSiriMediaVolumeAction:(long long)a0;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriPausedMedia;
+ (void)logSiriQuickStopAction:(unsigned long long)a0;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestFailedWithError:(id)a0;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriSpeechRequestStarted;
+ (void)logStarkGatekeeperAppearedForType:(unsigned long long)a0;
+ (void)logStarkGatekeeperDismissedManuallyForType:(unsigned long long)a0;
+ (void)logTimeToBeepWithDuration:(double)a0;
+ (void)logUILockCanceledVTActivation;
+ (void)missedAlertContextForRequest;
+ (void)missedAppContextForRequest;
+ (void)noteConnectedToCarPlayHeadunit;
+ (void)noteSuccessOfRequest:(id)a0 inCar:(BOOL)a1;

- (void)beginSessionRetryPreferringWWAN:(BOOL)a0;
- (void)connectionDidDrop;
- (void)connectionDidFail;
- (void)recordFailure:(int)a0 forConnectionType:(unsigned long long)a1;
- (void)recordSessionRetrySuccess;
- (void)recordSuccessForConnectionType:(unsigned long long)a0 isWarm:(BOOL)a1 forTimeInterval:(double)a2;
- (void)speechResponseFailure;
- (void)speechResponseReceived;
- (void)startWaitingForSpeechResponse;

@end
