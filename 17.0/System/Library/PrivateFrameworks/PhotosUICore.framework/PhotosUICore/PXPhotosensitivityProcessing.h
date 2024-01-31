@class PSEVideoProcessor;

@interface PXPhotosensitivityProcessing : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PSEVideoProcessor *_lock_processor;
    struct CGSize { double width; double height; } _lock_poolSize;
    struct __CVPixelBufferPool { } *_lock_pool;
}

@property (class, readonly, nonatomic) BOOL isSupported;

@property (readonly, nonatomic) PSEVideoProcessor *lock_processor;
@property (nonatomic) BOOL forceEnable;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (struct __CVPixelBufferPool { } *)_lock_poolForSize:(struct CGSize { double x0; double x1; })a0;
- (struct __CVBuffer { } *)_lock_processPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(double)a1;
- (struct __CVBuffer { } *)copyAndProcessPixelBuffer:(struct __CVBuffer { } *)a0 timestamp:(double)a1;

@end
