@class NSString, VCPMADServiceImageAsset, MADMLScalingRequest;

@interface VCPMADMLScalingTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADMLScalingRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    NSString *_signpostPayload;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _pixelBufferPool;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _outputPixelBufferPool;
    struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } _transferSession;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (int)run;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)autoCancellable;
- (int)convertPixelFormat:(struct __CVBuffer **)a0;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;
- (float)resourceRequirement;

@end
