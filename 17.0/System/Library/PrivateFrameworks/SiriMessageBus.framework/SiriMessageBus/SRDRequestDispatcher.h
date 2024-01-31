@class NSString, SRDRequestDispatcherInternal;

@interface SRDRequestDispatcher : NSObject <AFRequestDispatcher>

@property (readonly, nonatomic) SRDRequestDispatcherInternal *underlyingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)domains;
- (void)startSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2;
- (void)cancelRequestWithAssistantId:(id)a0 requestId:(id)a1;
- (id)commandsForDomain:(id)a0;
- (void)endDictationSessionWithAssistantId:(id)a0;
- (void)endSessionWithAssistantId:(id)a0;
- (void)handleCommand:(id)a0 executionContextInfo:(id)a1 reply:(id /* block */)a2;
- (BOOL)implementsCommand:(id)a0 forDomain:(id)a1;
- (id)initWithMock:(id)a0;
- (id)initWithRequestDispatcherServiceHelper:(id)a0;
- (id)initWithRequestDispatcherServiceHelper:(id)a0 bridgeConnectionListeners:(id)a1;
- (void)pauseDictationRecognitionWithAssistantId:(id)a0 requestId:(id)a1;
- (void)postTestResultCandidateWithAssistantId:(id)a0 requestId:(id)a1 rcId:(id)a2 recognitionSausage:(id)a3;
- (void)postTestResultSelectedWithAssistantId:(id)a0 requestId:(id)a1 rcId:(id)a2;
- (void)prewarmWithAssistantId:(id)a0 languageCode:(id)a1 prewarmOptions:(unsigned long long)a2 sharedUserId:(id)a3;
- (void)requestCompletedWithAssistantId:(id)a0 requestId:(id)a1;
- (void)resumeDictationRecognitionWithAssistantId:(id)a0 requestId:(id)a1 prefixText:(id)a2 postfixText:(id)a3 selectedText:(id)a4;
- (void)sendRequestContextWithAssistantId:(id)a0 requestId:(id)a1 audioSource:(id)a2 audioDestination:(id)a3 responseMode:(id)a4 isEyesFree:(BOOL)a5 isVoiceTriggerEnabled:(BOOL)a6 isTextToSpeechEnabled:(BOOL)a7 isTriggerlessFollowup:(BOOL)a8 bargeInModes:(id)a9 approximatePreviousTTSInterval:(id)a10 deviceRestrictions:(id)a11 voiceTriggerEventInfo:(id)a12;
- (void)sendRequestContextWithAssistantId:(id)a0 requestId:(id)a1 audioSource:(id)a2 audioDestination:(id)a3 responseMode:(id)a4 isEyesFree:(BOOL)a5 isVoiceTriggerEnabled:(BOOL)a6 isTextToSpeechEnabled:(BOOL)a7 isTriggerlessFollowup:(BOOL)a8 bargeInModes:(id)a9 approximatePreviousTTSInterval:(id)a10 deviceRestrictions:(id)a11 voiceTriggerEventInfo:(id)a12 voiceAudioSessionId:(unsigned int)a13;
- (void)sendRequestContextWithAssistantId:(id)a0 requestId:(id)a1 audioSource:(id)a2 audioDestination:(id)a3 responseMode:(id)a4 isEyesFree:(BOOL)a5 isVoiceTriggerEnabled:(BOOL)a6 isTextToSpeechEnabled:(BOOL)a7 isTriggerlessFollowup:(BOOL)a8 bargeInModes:(id)a9 approximatePreviousTTSInterval:(id)a10 deviceRestrictions:(id)a11 voiceTriggerEventInfo:(id)a12 voiceAudioSessionId:(unsigned int)a13 isSystemApertureEnabled:(BOOL)a14;
- (void)sendRequestContextWithAssistantId:(id)a0 requestId:(id)a1 audioSource:(id)a2 audioDestination:(id)a3 responseMode:(id)a4 isEyesFree:(BOOL)a5 isVoiceTriggerEnabled:(BOOL)a6 isTextToSpeechEnabled:(BOOL)a7 isTriggerlessFollowup:(BOOL)a8 bargeInModes:(id)a9 approximatePreviousTTSInterval:(id)a10 deviceRestrictions:(id)a11 voiceTriggerEventInfo:(id)a12 voiceAudioSessionId:(unsigned int)a13 isSystemApertureEnabled:(BOOL)a14 isInAmbient:(BOOL)a15;
- (BOOL)sessionExistsForAssistantId:(id)a0;
- (void)startCorrectionSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 previousUtterance:(id)a4;
- (void)startCorrectionSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 previousUtterance:(id)a4 audioSource:(id)a5 audioDestination:(id)a6 responseMode:(id)a7 isEyesFree:(BOOL)a8 isVoiceTriggerEnabled:(BOOL)a9 isTextToSpeechEnabled:(BOOL)a10 isTriggerlessFollowup:(BOOL)a11 bargeInModes:(id)a12 approximatePreviousTTSInterval:(id)a13 deviceRestrictions:(id)a14 voiceTriggerEventInfo:(id)a15 voiceAudioSessionId:(unsigned int)a16 isSystemApertureEnabled:(BOOL)a17;
- (void)startCorrectionSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 previousUtterance:(id)a4 audioSource:(id)a5 audioDestination:(id)a6 responseMode:(id)a7 isEyesFree:(BOOL)a8 isVoiceTriggerEnabled:(BOOL)a9 isTextToSpeechEnabled:(BOOL)a10 isTriggerlessFollowup:(BOOL)a11 bargeInModes:(id)a12 approximatePreviousTTSInterval:(id)a13 deviceRestrictions:(id)a14 voiceTriggerEventInfo:(id)a15 voiceAudioSessionId:(unsigned int)a16 isSystemApertureEnabled:(BOOL)a17 isInAmbient:(BOOL)a18;
- (void)startDirectActionRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 directAction:(id)a3 requestExecutionParameters:(id)a4;
- (void)startDirectActionRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 directAction:(id)a4 requestExecutionParameters:(id)a5 audioSource:(id)a6 audioDestination:(id)a7 responseMode:(id)a8 isEyesFree:(BOOL)a9 isVoiceTriggerEnabled:(BOOL)a10 isTextToSpeechEnabled:(BOOL)a11 isTriggerlessFollowup:(BOOL)a12 bargeInModes:(id)a13 approximatePreviousTTSInterval:(id)a14 deviceRestrictions:(id)a15 voiceTriggerEventInfo:(id)a16 voiceAudioSessionId:(unsigned int)a17 isSystemApertureEnabled:(BOOL)a18;
- (void)startDirectActionRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 directAction:(id)a4 requestExecutionParameters:(id)a5 audioSource:(id)a6 audioDestination:(id)a7 responseMode:(id)a8 isEyesFree:(BOOL)a9 isVoiceTriggerEnabled:(BOOL)a10 isTextToSpeechEnabled:(BOOL)a11 isTriggerlessFollowup:(BOOL)a12 bargeInModes:(id)a13 approximatePreviousTTSInterval:(id)a14 deviceRestrictions:(id)a15 voiceTriggerEventInfo:(id)a16 voiceAudioSessionId:(unsigned int)a17 isSystemApertureEnabled:(BOOL)a18 isInAmbient:(BOOL)a19;
- (void)startLocalRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2 sharedUserId:(id)a3;
- (void)startSpeechDictationRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 dictationOptions:(id)a3;
- (void)startSpeechDictationSessionWithAssistantId:(id)a0 languageCode:(id)a1 recognitionOnDevice:(BOOL)a2;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 location:(id)a3;
- (void)startSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 location:(id)a3 asrOnServer:(BOOL)a4;
- (void)startTestSpeechRequestWithAssistantId:(id)a0 requestId:(id)a1 enableASR:(BOOL)a2 inputOrigin:(id)a3 location:(id)a4 jitContext:(id)a5 overrideModelPath:(id)a6;
- (void)startTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3;
- (void)startTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 audioSource:(id)a4 audioDestination:(id)a5 responseMode:(id)a6 isEyesFree:(BOOL)a7 isVoiceTriggerEnabled:(BOOL)a8 isTextToSpeechEnabled:(BOOL)a9 isTriggerlessFollowup:(BOOL)a10 bargeInModes:(id)a11 approximatePreviousTTSInterval:(id)a12 deviceRestrictions:(id)a13 voiceTriggerEventInfo:(id)a14 voiceAudioSessionId:(unsigned int)a15 isSystemApertureEnabled:(BOOL)a16;
- (void)startTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3 audioSource:(id)a4 audioDestination:(id)a5 responseMode:(id)a6 isEyesFree:(BOOL)a7 isVoiceTriggerEnabled:(BOOL)a8 isTextToSpeechEnabled:(BOOL)a9 isTriggerlessFollowup:(BOOL)a10 bargeInModes:(id)a11 approximatePreviousTTSInterval:(id)a12 deviceRestrictions:(id)a13 voiceTriggerEventInfo:(id)a14 voiceAudioSessionId:(unsigned int)a15 isSystemApertureEnabled:(BOOL)a16 isInAmbient:(BOOL)a17;
- (void)startUnderstandingDictationRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 dictationOptions:(id)a3;
- (void)startUnderstandingDictationSessionWithAssistantId:(id)a0 languageCode:(id)a1 understandingOnDevice:(BOOL)a2;
- (void)startUnderstandingOnServerRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2;
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(id)a0 requestId:(id)a1 inputOrigin:(id)a2 utterance:(id)a3;

@end
