@class VCPPreAnalysisImageLoader, VCPObjectPool, VCPMAMLModel, NSObject, VCPPoolBasedPixelBufferCreator;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPPreAnalyzer : NSObject {
    NSObject<OS_dispatch_group> *_processingGroup;
    NSObject<OS_dispatch_queue> *_processingQueue;
    VCPPreAnalysisImageLoader *_imageLoader;
    VCPPoolBasedPixelBufferCreator *_monochromeBufferCreator;
    VCPObjectPool *_sessionPool;
    VCPMAMLModel *_rotationModel;
    VCPPoolBasedPixelBufferCreator *_rotationBufferCreator;
    VCPObjectPool *_ivsPool;
}

+ (BOOL)_allowANE;
+ (BOOL)_enableSceneAssetConcurrency;
+ (unsigned long long)_getSHRevision;
+ (BOOL)_includeCN;
+ (BOOL)_includeDMF;
+ (BOOL)_includeDO;
+ (BOOL)_includeDocument;
+ (BOOL)_includeIVS;
+ (BOOL)_includeLM;
+ (BOOL)_includeMeme;
+ (BOOL)_includeNSFW;
+ (BOOL)_includePA;
+ (BOOL)_includeRotation;
+ (BOOL)_includeSDG;
+ (BOOL)_includeSE;
+ (BOOL)_includeSO;
+ (BOOL)_includeWP;
+ (BOOL)_isMovieWithMediaType:(long long)a0;
+ (BOOL)_isPanoWithMediaType:(long long)a0 andMediaSubtypes:(unsigned long long)a1;
+ (BOOL)_isSDOFWithMediaType:(long long)a0 andMediaSubtypes:(unsigned long long)a1;
+ (id)_nonPanoPreWarmDimensions;
+ (BOOL)_useR14J9;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_configureRequest:(id)a0;
- (void)_configureRequest:(id)a0 withRevision:(unsigned long long)a1;
- (int)_collectSceneAnalysisResults:(id *)a0 fromRequests:(id)a1 wpResults:(id)a2 ivsResults:(id)a3 abnormalDimension:(unsigned long long)a4;
- (int)_createRequests:(id)a0 withMediaType:(long long)a1;
- (id)_extractAndSortBoundingBoxFromDetectedObjects:(id)a0;
- (void)_generateSceneClassifications:(id)a0 fromRequests:(id)a1;
- (void)_insertBoundingBox:(id)a0 toSortedBoundingBoxes:(id)a1;
- (void)_parseClassificationObservations:(id)a0 toClassificationResults:(id)a1;
- (void)_parseClassificationObservations:(id)a0 withPrefix:(id)a1 toClassificationResults:(id)a2;
- (void)_parsePhotosTaxonomyClassificationObservations:(id)a0 toClassificationResults:(id)a1 andDetectorSceneClassIds:(id)a2 isEntityNet:(BOOL)a3;
- (int)_performAnalysis:(id *)a0 mediaType:(long long)a1 mediaSubtypes:(unsigned long long)a2 abnormalDimension:(unsigned long long)a3 colorPixelBuffer:(struct __CVBuffer { } *)a4 andLumaPixelBuffer:(struct __CVBuffer { } *)a5 image:(id)a6;
- (int)_performBlurAnalysis:(id *)a0 withLumaPixelBuffer:(struct __CVBuffer { } *)a1 abnormalDimension:(unsigned long long)a2 isSDOF:(BOOL)a3;
- (int)_performBlurAnalysis:(id *)a0 withPixelBuffer:(struct __CVBuffer { } *)a1 usingAnalyzer:(id)a2;
- (int)_performExposureAnalysis:(id *)a0 withLumaPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)_performRotationAnalysis:(id *)a0 withColorPixelBuffer:(struct __CVBuffer { } *)a1;
- (int)_performSceneAnalysis:(id *)a0 image:(id)a1 mediaType:(long long)a2 mediaSubtypes:(unsigned long long)a3 abnormalDimension:(unsigned long long)a4;
- (int)_performWallpaperAnalysis:(id *)a0 withSceneprint:(id)a1;
- (id)_processBoundingBoxFromDetectedObjects:(id)a0 forSceneClassID:(id)a1;
- (void)analyzeWithImageURL:(id)a0 mediaType:(long long)a1 mediaSubtypes:(unsigned long long)a2 abnormalDimension:(unsigned long long)a3 completionHandler:(id /* block */)a4;

@end
