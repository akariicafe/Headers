@class NUPurgeableStoragePool, NUImageHistogram, CIRenderTask;
@protocol NUScalePolicy, NUPurgeableStorage;

@interface NUHistogramRenderJob : NURenderJob {
    NUPurgeableStoragePool *_storagePool;
    id<NUPurgeableStorage> _renderDestination;
    NUImageHistogram *_histogram;
    CIRenderTask *_renderTask;
    id<NUScalePolicy> _scalePolicy;
}

- (id)cacheKey;
- (id)result;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (void)cleanUp;
- (id)histogramRequest;
- (BOOL)render:(out id *)a0;
- (BOOL)complete:(out id *)a0;
- (id)scalePolicy;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputImage;
- (id)initWithHistogramRequest:(id)a0;

@end
