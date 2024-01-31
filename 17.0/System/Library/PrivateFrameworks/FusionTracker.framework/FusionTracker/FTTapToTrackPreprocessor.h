@protocol FTScaling;

@interface FTTapToTrackPreprocessor : NSObject {
    struct shared_ptr<__CVBuffer> { struct __CVBuffer *__ptr_; struct __shared_weak_count *__cntrl_; } _intermediateBuffer;
    void /* unknown type, empty encoding */ _meanPixel;
    id<FTScaling> _scaler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct __CVBuffer { } *)bgraPixelBuffer;
- (id)initWithScaler:(id)a0;
- (void /* unknown type, empty encoding */)meanPixel;
- (BOOL)preprocessBuffer:(struct __CVBuffer { } *)a0;

@end
