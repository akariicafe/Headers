@class NSObject, VKCImageAnalyzer, _PXVisualIntelligenceRequest, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PXVisualIntelligenceManager : NSObject

@property (class, readonly, nonatomic) PXVisualIntelligenceManager *sharedManager;
@property (class, readonly, nonatomic) unsigned long long supportedAnalysisTypes;
@property (class, readonly, nonatomic) BOOL isLiveTextSupported;
@property (class, readonly, nonatomic) BOOL isVisualSearchSupported;
@property (class, readonly, nonatomic) BOOL isMRCSupported;
@property (class, readonly, nonatomic) BOOL isAppClipSupported;
@property (class, readonly, nonatomic) BOOL isImageSegmentationSupported;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workingQueue;
@property (nonatomic) int nextRequestID;
@property (retain, nonatomic) NSMutableArray *requests;
@property (retain, nonatomic) _PXVisualIntelligenceRequest *currentRequest;
@property (retain, nonatomic) VKCImageAnalyzer *vkAnalyzer;
@property (nonatomic) BOOL analysisSuspended;

+ (struct CGSize { double x0; double x1; })_sizeToPreheatResourcesForSubjectExtractionOfAsset:(id)a0;
+ (BOOL)canRequestVKImageAnalysisForAsset:(id)a0;
+ (int)preheatResourcesForSubjectExtractionOfAsset:(id)a0;

- (id)init;
- (int)requestVKImageAnalysisForAsset:(id)a0 image:(id)a1 resultHandler:(id /* block */)a2;
- (void)_cancelRequestByAsset_sync:(id)a0;
- (int)requestVKImageAnalysisForAsset:(id)a0 cgImage:(struct CGImage { } *)a1 orientation:(long long)a2 resultHandler:(id /* block */)a3;
- (void)cancelRequestByAsset:(id)a0;
- (int)requestVKImageAnalysisForAsset:(id)a0 resultHandler:(id /* block */)a1;
- (void)_resetCurrentRequestAndDispatchNextRequest;
- (void)cancelRequestByID:(int)a0;
- (void)_processAnalysis:(id)a0 withRequest:(id)a1 error:(id)a2;
- (int)requestVKImageAnalysisForAsset:(id)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(long long)a2 resultHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_dispatchNextRequest;
- (void)_logAnalysis:(id)a0 request:(id)a1 duration:(double)a2 error:(id)a3;

@end
