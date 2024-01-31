@interface ARPersonOcclusionTechnique : ARTechnique {
    struct __CVPixelBufferPool { } *_depthPixelBufferPool;
    struct shared_ptr<arkit::RobustExpFilter<float>> { void *__ptr_; struct __shared_weak_count *__cntrl_; } _varExpFilter;
    long long _lastDeviceOrientation;
    unsigned long long _minFilterIntermediateBufferSize;
    char *_minFilterIntermediatePooledBuffer;
    BOOL _doExpFiltering;
    BOOL _useBoundingBoxes;
}

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (id)_fullDescription;
- (void).cxx_destruct;
- (int)_minFilterDepthMap:(struct __CVBuffer { } *)a0 kernelSize:(unsigned long long)a1 pResultBuffer:(struct __CVBuffer **)a2;
- (int)postProcessSegmentation:(struct __CVBuffer { } *)a0 depthData:(id)a1 depthDataSource:(long long)a2 detectionData:(id)a3 pResultingDepthBuffer:(struct __CVBuffer **)a4;
- (void)requestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
