@protocol MTLDevice;

@interface LiPersonDepthWriter : NSObject {
    void /* unknown type, empty encoding */ _matteTexCoords[6];
}

@property (retain, nonatomic) id<MTLDevice> device;
@property (nonatomic) long long sampleCount;

+ (id)sharedDepthStencilStateWithDevice:(id)a0;
+ (id)sharedRenderPipelineStateWithDevice:(id)a0 sampleCount:(long long)a1;

- (void)dealloc;
- (void)computeMatteTexCoordsWithMatteSize:(struct CGSize { double x0; double x1; })a0 projectSize:(struct CGSize { double x0; double x1; })a1 videoOrientation:(int)a2;
- (void)drawWithDepthMap:(id)a0 matte:(id)a1 uniforms:(struct PersonDepthUniforms { float x0; float x1; float x2; int x3; })a2 windowSize:(struct CGSize { double x0; double x1; })a3 renderCommandEncoder:(id)a4;
- (id)initWithDevice:(id)a0 sampleCount:(long long)a1;
- (id)renderPassDescriptorWithColorTexture:(id)a0 depthTexture:(id)a1;
- (void)writeWithDepthMap:(id)a0 matte:(id)a1 depthTexture:(id)a2 colorTexture:(id)a3 uniforms:(struct PersonDepthUniforms { float x0; float x1; float x2; int x3; })a4 windowSize:(struct CGSize { double x0; double x1; })a5 commandBuffer:(id)a6;

@end
