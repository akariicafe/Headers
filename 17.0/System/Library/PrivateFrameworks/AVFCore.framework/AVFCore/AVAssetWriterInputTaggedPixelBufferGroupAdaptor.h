@class AVAssetWriterInput, NSDictionary;

@interface AVAssetWriterInputTaggedPixelBufferGroupAdaptor : NSObject {
    AVAssetWriterInput *_input;
}

@property (readonly, nonatomic) AVAssetWriterInput *assetWriterInput;
@property (readonly, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) struct __CVPixelBufferPool { } *pixelBufferPool;

+ (id)assetWriterInputTaggedPixelBufferGroupAdaptorWithAssetWriterInput:(id)a0 sourcePixelBufferAttributes:(id)a1;

- (id)init;
- (void)dealloc;
- (BOOL)appendTaggedPixelBufferGroup:(struct OpaqueCMTaggedBufferGroup { } *)a0 withPresentationTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)description;
- (id)initWithAssetWriterInput:(id)a0 sourcePixelBufferAttributes:(id)a1;

@end
