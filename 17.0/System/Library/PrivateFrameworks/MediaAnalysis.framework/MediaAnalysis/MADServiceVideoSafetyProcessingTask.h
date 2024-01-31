@class MADVideoSafetyClassificationRequest, MADServiceVideoAsset, SCMLVideoAnalyzer, NSDictionary, NSError, NSObject, SCMLHandler;
@protocol VCPBlockBasedVideoProcessorProtocol;

@interface MADServiceVideoSafetyProcessingTask : MADServiceVideoProcessingSubtask {
    MADVideoSafetyClassificationRequest *_request;
    MADServiceVideoAsset *_asset;
    NSObject<VCPBlockBasedVideoProcessorProtocol> *_videoProcessor;
    SCMLHandler *_handler;
    SCMLVideoAnalyzer *_videoAnalyzer;
    NSError *_processError;
    BOOL _isSensitive;
    NSDictionary *_scoresForLabels;
    id /* block */ _progressHandler;
    id /* block */ _completionHandler;
}

@property (nonatomic) BOOL enablePowerLog;

- (BOOL)run:(id *)a0;
- (void).cxx_destruct;
- (id)finalizeSafetyResultsWithError:(id *)a0;
- (void)_processFrameBuffer:(struct opaqueCMSampleBuffer { } *)a0 stop:(BOOL *)a1;
- (BOOL)configureVideoProcessorWithError:(id *)a0;
- (id)initWithRequest:(id)a0 forAsset:(id)a1 cancelBlock:(id /* block */)a2 progressHandler:(id /* block */)a3 andCompletionHandler:(id /* block */)a4;

@end
