@class NSString, NSMutableDictionary;

@interface SSRLoggingAggregator : NSObject {
    NSString *_eventString;
    NSMutableDictionary *_eventContext;
    unsigned long long explicitUtteranceIndex;
    unsigned long long explicitFailedUtteranceIndex;
    unsigned long long implicitUtteranceIndex;
    unsigned long long implicitDiscardedUtteranceIndex;
}

@property (nonatomic) unsigned long long voiceProfilePruningFailureReasonCode;
@property (nonatomic) float voiceProfileUpdateScoreMSE;
@property (nonatomic) unsigned long long voiceProfileDiscardedUtteranceCount;
@property (nonatomic) unsigned long long voiceProfilePrunedUtteranceCount;
@property (nonatomic) unsigned long long voiceProfileRetainedUtteranceCount;
@property (nonatomic) unsigned long long voiceProfileRetrainingFailureReasonCode;
@property (nonatomic) double retrainingWaitTime;
@property (nonatomic) unsigned long long speakerRecognitionProcessingStatus;
@property (nonatomic) double speakerRecognitionWaitTime;
@property (nonatomic) unsigned long long speakerRecognitionPSRProcessingStatus;
@property (nonatomic) unsigned long long speakerRecognitionSATProcessingStatus;

- (void).cxx_destruct;
- (void)appendVoiceProfileDiscardedImplicitUtteranceScoreWith:(float)a0;
- (void)appendVoiceProfileExplicitUtteranceScoreWith:(float)a0;
- (void)appendVoiceProfileFailedExplicitUtteranceScoreWith:(float)a0;
- (void)appendVoiceProfileImplicitUtteranceScoreWith:(float)a0;
- (id)initWithEvent:(id)a0 locale:(id)a1 configVersion:(id)a2;
- (void)pushAnalytics;
- (void)pushAnalyticsWithLazyBlock:(id /* block */)a0;
- (void)setvoiceProfilePrunedUtteranceCount:(unsigned long long)a0;

@end
