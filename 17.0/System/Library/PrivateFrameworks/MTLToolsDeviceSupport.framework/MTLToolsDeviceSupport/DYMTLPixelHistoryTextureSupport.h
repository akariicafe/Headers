@interface DYMTLPixelHistoryTextureSupport : NSObject

+ (id)pixelValueFromTexture:(id)a0 level:(unsigned long long)a1 slice:(unsigned long long)a2 depthPlane:(unsigned long long)a3 atX:(unsigned long long)a4 y:(unsigned long long)a5 inCommandBuffer:(id)a6 overHarvestForDepthStencil:(BOOL)a7;
+ (void)pixelValueFromTexture:(id)a0 level:(unsigned long long)a1 slice:(unsigned long long)a2 depthPlane:(unsigned long long)a3 atX:(unsigned long long)a4 y:(unsigned long long)a5 inCommandBuffer:(id)a6 overHarvestForDepthStencil:(BOOL)a7 completion:(id /* block */)a8;
+ (void)pixelValueToTexture:(id)a0 buffer:(id)a1 level:(unsigned long long)a2 slice:(unsigned long long)a3 depthPlane:(unsigned long long)a4 atX:(unsigned long long)a5 y:(unsigned long long)a6 inCommandBuffer:(id)a7;

@end
