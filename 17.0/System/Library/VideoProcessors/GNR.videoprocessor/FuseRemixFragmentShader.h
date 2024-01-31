@class NSString;
@protocol MTLRenderPipelineState;

@interface FuseRemixFragmentShader : NSObject {
    id<MTLRenderPipelineState> _pipeline;
    NSString *_fragName;
}

- (id)initWithMetal:(id)a0 fragName:(id)a1 pixelFormat:(unsigned long long)a2 fusionType:(int)a3 fixPyramidAlignment:(BOOL)a4 staticOIS:(BOOL)a5 reduceOisGhosting:(BOOL)a6;
- (void).cxx_destruct;

@end
