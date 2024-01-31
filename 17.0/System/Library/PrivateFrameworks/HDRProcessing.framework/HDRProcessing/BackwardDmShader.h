@class NSString;
@protocol MTLRenderPipelineState;

@interface BackwardDmShader : NSObject {
    NSString *_vertexKernelName;
    NSString *_fragmentKernelName;
    id<MTLRenderPipelineState> _renderPipeline;
    unsigned long long _colorFormat;
    BOOL _useCustomMatrix;
    BOOL _p3CSC;
    BOOL _applyYGamma;
}

+ (id)createShaderWithVertexName:(id)a0 fragmentName:(id)a1 colorFormat:(unsigned long long)a2 useCustomMatrix:(BOOL)a3 p3CSC:(BOOL)a4 applyYGamma:(BOOL)a5;

- (void).cxx_destruct;
- (id)getRenderPipelineStateForDevice:(id)a0 Library:(id)a1;
- (id)getRenderPipelineStateForDevice:(id)a0 Library:(id)a1 Constants:(BOOL *)a2 ConstantNumber:(unsigned int)a3;
- (id)initShaderWithVertexName:(id)a0 fragmentName:(id)a1 colorFormat:(unsigned long long)a2 useCustomMatrix:(BOOL)a3 p3CSC:(BOOL)a4 applyYGamma:(BOOL)a5;

@end
