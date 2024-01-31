@class NSMutableDictionary;

@interface VCPPreAnalysisImage : NSObject {
    NSMutableDictionary *_scaledPixelBuffers;
    struct CF<__CVBuffer *> { struct __CVBuffer *value_; } _sourcePixelBuffer;
}

@property (readonly, nonatomic) struct __CVBuffer { } *sourcePixelBuffer;

- (id)initWithPixelBuffer:(struct __CVBuffer { } *)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)pixelBuffer:(struct __CVBuffer **)a0 width:(unsigned long long)a1 height:(unsigned long long)a2;
- (int)preWarmWidth:(unsigned long long)a0 andHeight:(unsigned long long)a1;

@end
