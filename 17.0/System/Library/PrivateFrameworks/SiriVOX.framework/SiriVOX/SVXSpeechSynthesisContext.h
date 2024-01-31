@class SiriTTSSpeechRequest, NSString, NSArray, SiriTTSAudioRequest, SVXAudioSessionAssertion, NSDictionary, SVXSpeechSynthesisRequest, SiriTTSInstrumentationMetrics, SiriTTSSynthesisRequest;
@protocol SVXTaskTracking;

@interface SVXSpeechSynthesisContext : NSObject {
    id /* block */ _preparation;
    unsigned long long _audioChunkCount;
    id /* block */ _audioChunkHandler;
    id /* block */ _finalization;
}

@property (readonly, nonatomic) long long operationType;
@property (readonly, copy, nonatomic) SVXSpeechSynthesisRequest *request;
@property (readonly, copy, nonatomic) NSString *languageCode;
@property (readonly, copy, nonatomic) NSString *voiceName;
@property (readonly, nonatomic) long long gender;
@property (readonly, nonatomic) unsigned int audioSessionID;
@property (readonly, copy, nonatomic) NSDictionary *analyticsContext;
@property (nonatomic) BOOL handledPresynthesizedAudioRequest;
@property (nonatomic) BOOL handledSpeechRequest;
@property (nonatomic) BOOL isStreamingSynthesisRequest;
@property (retain, nonatomic) SiriTTSAudioRequest *presynthesizedAudioRequest;
@property (retain, nonatomic) SiriTTSSpeechRequest *speechRequest;
@property (retain, nonatomic) SiriTTSSynthesisRequest *synthesisRequest;
@property (retain, nonatomic) SiriTTSInstrumentationMetrics *instrumentMetrics;
@property (copy, nonatomic) NSArray *speechWordTimingInfoArray;
@property (readonly, nonatomic) id<SVXTaskTracking> taskTracker;
@property (retain, nonatomic) SVXAudioSessionAssertion *audioSessionAssertion;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)prepare;
- (void)finalizeWithResultType:(long long)a0 utteranceInfo:(id)a1 error:(id)a2;
- (void)handleAudioChunkData:(id)a0;
- (id)initWithOperationType:(long long)a0 request:(id)a1 languageCode:(id)a2 voiceName:(id)a3 gender:(long long)a4 audioSessionID:(unsigned int)a5 preparation:(id /* block */)a6 audioChunkHandler:(id /* block */)a7 finalization:(id /* block */)a8 taskTracker:(id)a9 analyticsContext:(id)a10;

@end
