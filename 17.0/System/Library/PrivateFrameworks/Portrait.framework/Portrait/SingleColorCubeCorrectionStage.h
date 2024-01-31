@protocol MTLTexture;

@interface SingleColorCubeCorrectionStage : NSObject {
    id<MTLTexture> _defaultCubeTexture;
}

- (void).cxx_destruct;
- (id)cubeTexture;
- (id)init:(id)a0 cubeSize:(unsigned int)a1 data:(const char *)a2;
- (int)load3DTextureFromData:(const char *)a0 cubeSize:(unsigned int)a1 metal:(id)a2 outTexture:(id *)a3;

@end
