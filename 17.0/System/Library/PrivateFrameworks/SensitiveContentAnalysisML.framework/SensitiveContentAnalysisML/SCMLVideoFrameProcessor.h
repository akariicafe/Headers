@class SCMLImageAnalyzer, SCMLVideoAnalysisResult, NSMutableArray, SCMLVideoAnalysisConfiguration;

@interface SCMLVideoFrameProcessor : NSObject

@property (retain, nonatomic) SCMLImageAnalyzer *imageAnalyzer;
@property (retain, nonatomic) NSMutableArray *frameQueue;
@property (nonatomic) unsigned long long frameCount;
@property (nonatomic) unsigned long long sensitiveFrameCount;
@property (retain, nonatomic) SCMLVideoAnalysisResult *result;
@property (retain, nonatomic) SCMLVideoAnalysisConfiguration *config;

- (void)reset;
- (void)dealloc;
- (id)analyze:(id *)a0;
- (void).cxx_destruct;
- (id)finalizeAnalysis:(id *)a0;
- (void)startAnalysisWithConfig:(id)a0;
- (BOOL)addFrameBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithImageAnalyzer:(id)a0;
- (void)outputDebugInfoForFrame:(id)a0 isSensitive:(BOOL)a1 sensitivityScore:(id)a2;
- (id)popFrame;
- (void)pushFrame:(id)a0;

@end
