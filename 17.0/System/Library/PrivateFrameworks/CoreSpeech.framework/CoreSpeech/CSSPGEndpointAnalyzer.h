@class EARCaesuraSilencePosteriorGenerator, NSString, NSObject;
@protocol OS_dispatch_queue, CSSPGEndpointAnalyzerDelegate;

@interface CSSPGEndpointAnalyzer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) EARCaesuraSilencePosteriorGenerator *caesuraSPG;
@property (nonatomic) float endpointThreshold;
@property (nonatomic) BOOL hasReported;
@property (nonatomic) BOOL isAnalyzeMode;
@property (nonatomic) double lastSilencePosterior;
@property (weak, nonatomic) id<CSSPGEndpointAnalyzerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)reset;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)clientSilenceFeaturesAvailable:(id)a0;
- (void)addAudio:(id)a0 numSamples:(unsigned long long)a1;
- (long long)getFrameDurationMs;
- (void)silenceDurationEstimateAvailable:(float *)a0 numEstimates:(unsigned long long)a1 clientProcessedAudioMs:(float)a2;
- (id)initWithAnalyzeMode;
- (id)initWithEndpointThreshold:(float)a0;

@end
