@class NSString;
@protocol MTLRenderPipelineState;

@interface DenoiseRemixFragmentShader : NSObject {
    id<MTLRenderPipelineState> _pipeline;
    NSString *_fragName;
}

- (id)initWithMetal:(id)a0 vertFunc:(id)a1 fragName:(id)a2 useLGA:(int)a3 useGDGNR:(int)a4 pixelFormat:(unsigned long long)a5 pixelFormat2:(unsigned long long)a6 pixelFormat3:(unsigned long long)a7;
- (void).cxx_destruct;

@end
