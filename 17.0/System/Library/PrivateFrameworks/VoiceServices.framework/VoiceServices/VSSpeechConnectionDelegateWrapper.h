@class NSMutableDictionary, VSSpeechRequest, NSString, VSPresynthesizedAudioRequest, NSMutableArray, VSSpeechConnection;
@protocol VSSpeechConnectionDelegate;

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate>

@property (weak, nonatomic) id<VSSpeechConnectionDelegate> delegate;
@property (retain, nonatomic) VSSpeechRequest *currentRequest;
@property (retain, nonatomic) NSMutableArray *requests;
@property (retain, nonatomic) NSMutableDictionary *concurrentSynthesisRequests;
@property (retain, nonatomic) VSPresynthesizedAudioRequest *currentAudioRequest;
@property (retain, nonatomic) NSMutableArray *audioRequests;
@property (retain, nonatomic) NSMutableArray *previewRequests;
@property (weak, nonatomic) VSSpeechConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (oneway void)synthesisRequest:(id)a0 didGenerateAudioChunk:(id)a1;
- (oneway void)speechRequestDidPause:(id)a0;
- (oneway void)speechRequestDidContinue:(id)a0;
- (oneway void)audioRequestDidStart:(id)a0;
- (oneway void)speechRequestDidStart:(id)a0;
- (id)getLocalAudioRequest:(id)a0;
- (oneway void)previewRequestDidStartPlaying:(id)a0;
- (oneway void)synthesisRequest:(id)a0 didFinishWithInstrumentMetrics:(id)a1 error:(id)a2;
- (void).cxx_destruct;
- (oneway void)speechRequest:(id)a0 didStopWithSuccess:(BOOL)a1 phonemesSpoken:(id)a2 error:(id)a3;
- (oneway void)audioRequest:(id)a0 didReportInstrumentMetrics:(id)a1 error:(id)a2;
- (id)getLocalPreviewRequest:(id)a0;
- (oneway void)audioRequest:(id)a0 didStopAtEnd:(BOOL)a1 error:(id)a2;
- (oneway void)speechRequest:(id)a0 didStartWithMark:(long long)a1 forRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (oneway void)synthesisRequest:(id)a0 didReceiveTimingInfo:(id)a1;
- (id)getLocalRequest:(id)a0;
- (oneway void)speechRequest:(id)a0 didReportInstrumentMetrics:(id)a1;
- (oneway void)speechRequest:(id)a0 didReceiveTimingInfo:(id)a1;

@end
