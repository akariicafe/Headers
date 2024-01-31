@class NSString, MADImageSafetyClassificationRequest, VCPMADServiceImageAsset;

@interface VCPMADImageSafetyClassificationTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADImageSafetyClassificationRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    NSString *_signpostPayload;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    struct Scaler { struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } pool_; int width_; int height_; unsigned int format_; struct CF<OpaqueVTPixelTransferSession *> { struct OpaqueVTPixelTransferSession *value_; } transfer_session_; } _scaler;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (int)run;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)autoCancellable;
- (int)createUprightPixelBuffer:(struct __CVBuffer **)a0 fromSourceBuffer:(struct __CVBuffer { } *)a1 andOrientation:(unsigned int)a2;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;
- (void)logMemoryWithMessage:(id)a0;
- (float)resourceRequirement;

@end
