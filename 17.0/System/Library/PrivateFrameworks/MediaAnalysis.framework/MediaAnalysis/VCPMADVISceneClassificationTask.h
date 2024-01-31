@class MADVISceneClassificationRequest, NSString, VNImageBasedRequest, VCPMADServiceImageAsset, NSObject;
@protocol OS_dispatch_queue, MTLDevice;

@interface VCPMADVISceneClassificationTask : NSObject <VCPMADServiceImageProcessingSubtaskProtocol, VCPMADTaskProtocol> {
    MADVISceneClassificationRequest *_request;
    VCPMADServiceImageAsset *_imageAsset;
    id<MTLDevice> _preferredMetalDevice;
    NSString *_signpostPayload;
    NSObject<OS_dispatch_queue> *_cancelQueue;
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
    VNImageBasedRequest *_weakClassificationRequest;
    VNImageBasedRequest *_weakNSFWRequest;
    VNImageBasedRequest *_weakSignificantEventRequest;
    VNImageBasedRequest *_weakRecognizedObjectsRequest;
    VNImageBasedRequest *_weakSaliencyRequest;
}

+ (id)dependencies;
+ (id)taskWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;

- (int)run;
- (void).cxx_destruct;
- (void)cancel;
- (void)setPreferredMetalDevice:(id)a0;
- (void)configureRequest:(id)a0;
- (BOOL)autoCancellable;
- (void)configureRequest:(id)a0 withRevision:(unsigned long long)a1;
- (id)initWithRequest:(id)a0 imageAsset:(id)a1 andSignpostPayload:(id)a2;
- (float)resourceRequirement;

@end
