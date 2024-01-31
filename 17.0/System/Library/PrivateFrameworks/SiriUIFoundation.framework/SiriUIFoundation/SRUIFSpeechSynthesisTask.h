@class NSDictionary, NSString, VSSpeechRequest, SAUIAudioData, VSPresynthesizedAudioRequest, SiriTTSBaseRequest, NSError;
@protocol SRUIFSpeechSynthesisTaskDelegate;

@interface SRUIFSpeechSynthesisTask : NSObject

@property (nonatomic, getter=isEligibleForSynthesis, setter=_setEligibleForSynthesis:) BOOL eligibleForSynthesis;
@property (nonatomic, getter=isEligibleForProcessing, setter=_setEligibleForProcessing:) BOOL eligibleForProcessing;
@property (readonly, nonatomic, getter=_completion) id /* block */ completion;
@property (copy, nonatomic, setter=_setText:) NSString *text;
@property (setter=_setPreparationBlockCompleted:) BOOL preparationBlockCompleted;
@property (setter=_setDurationHasElapsed:) BOOL durationHasElapsed;
@property (readonly, nonatomic) SAUIAudioData *audioData;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sessionId;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *gender;
@property (nonatomic) BOOL isPhonetic;
@property (readonly, nonatomic, getter=isProvisional) BOOL provisional;
@property (nonatomic, getter=isDelayed) BOOL delayed;
@property (nonatomic) BOOL canUseServerTTS;
@property (retain, nonatomic) VSSpeechRequest *speechRequest;
@property (retain, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest;
@property (retain, nonatomic) SiriTTSBaseRequest *ttsSessionRequest;
@property (nonatomic) long long synthesisResult;
@property (retain, nonatomic) NSError *synthesisError;
@property (weak, nonatomic) id<SRUIFSpeechSynthesisTaskDelegate> delegate;
@property (readonly, nonatomic) NSDictionary *analyticsContext;
@property (retain, nonatomic) NSDictionary *speakableContextInfo;
@property (nonatomic) BOOL shouldCache;

- (id)description;
- (void).cxx_destruct;
- (void)_updateSynthesisEligibility;
- (void)executeCompletion;
- (id)initWithText:(id)a0 audioData:(id)a1 identifier:(id)a2 sessionId:(id)a3 language:(id)a4 gender:(id)a5 provisional:(BOOL)a6 eligibleAfterDuration:(double)a7 delayed:(BOOL)a8 preparation:(id /* block */)a9 completion:(id /* block */)a10 analyticsContext:(id)a11 speakableContextInfo:(id)a12 canUseServerTTS:(BOOL)a13 eligibilityChangedQueue:(id)a14;

@end
