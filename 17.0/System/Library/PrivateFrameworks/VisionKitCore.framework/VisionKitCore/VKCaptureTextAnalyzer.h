@class VKCaptureTextAnalysisRequest, NSObject;
@protocol OS_dispatch_queue;

@interface VKCaptureTextAnalyzer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_processingQueue;
@property (retain, nonatomic, setter=_setPendingRequest:) VKCaptureTextAnalysisRequest *_pendingRequest;
@property (retain, nonatomic, setter=_setProcessingRequest:) VKCaptureTextAnalysisRequest *_processingRequest;
@property (nonatomic, getter=_isProcessing, setter=_setProcessing:) BOOL _processing;
@property (nonatomic) BOOL shouldCreateFeedbackProviders;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)processRequest:(id)a0;
- (id)_blocksIntersectingQuad:(id)a0 inDocument:(id)a1;
- (void)_didProcessRequest:(id)a0 withDetectionResult:(id)a1 analysis:(id)a2 error:(id)a3;
- (id)_documentDetectionRequest;
- (id)_documentRecognitionRequestWithInputBlock:(id)a0;
- (id)_documentRecognitionRequestWithInputBlocks:(id)a0;
- (void)_enqueueProcessingForRequest:(id)a0;
- (id)_imageAnalysisForDocument:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)_isCanceledRequest:(id)a0;

@end
