@class SCMLImageAnalyzer, SCMLVideoDecoder, SCMLVideoFrameProcessor, SCMLHandler;

@interface SCMLVideoAnalyzer : NSObject

@property (readonly, retain, nonatomic) SCMLHandler *handler;
@property (readonly, retain, nonatomic) SCMLImageAnalyzer *imageAnalyzer;
@property (retain, nonatomic) SCMLVideoFrameProcessor *frameProcessor;
@property (retain, nonatomic) SCMLVideoDecoder *decoder;

- (id)analyze:(id *)a0;
- (void).cxx_destruct;
- (BOOL)addFrameBuffer:(struct opaqueCMSampleBuffer { } *)a0 error:(id *)a1;
- (id)finalizeAnalysis:(id *)a0;
- (id)initWithMLHandler:(id)a0;
- (void)startAnalysisWithConfig:(id)a0;
- (id)analyzeVideoURL:(id)a0 config:(id)a1 error:(id *)a2;

@end
