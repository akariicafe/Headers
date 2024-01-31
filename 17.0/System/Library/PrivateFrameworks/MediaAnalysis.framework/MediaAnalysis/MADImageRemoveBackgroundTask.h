@class NSString;
@protocol MTLDevice;

@interface MADImageRemoveBackgroundTask : NSObject {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _canceled;
}

@property (readonly, nonatomic) NSString *signpostPayload;
@property (readonly, nonatomic) BOOL canceled;
@property (retain, nonatomic) id<MTLDevice> preferredMetalDevice;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)autoCancellable;
- (BOOL)computeRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 pixelBuffer:(struct __CVBuffer { } *)a1 orientation:(unsigned int)a2 error:(id *)a3;
- (id)computeSensitivityOfPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)generateMaskWithRequestHandler:(id)a0 regionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 error:(id *)a2;
- (id)initWithSignpostPayload:(id)a0;
- (float)resourceRequirement;

@end
