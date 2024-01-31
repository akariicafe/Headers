@class FuseRemixFragmentShader;

@interface FuseRemixShaders : NSObject {
    FuseRemixFragmentShader *_fuseLuma;
    FuseRemixFragmentShader *_fuseChroma;
    FuseRemixFragmentShader *_fuseRemixLuma;
    FuseRemixFragmentShader *_fuseRemixChroma;
    FuseRemixFragmentShader *_blackSubtraction;
}

- (id)initWithMetal:(id)a0 pixelFormatLuma:(unsigned long long)a1 pixelFormatChroma:(unsigned long long)a2 fusionType:(int)a3 fixPyramidAlignment:(BOOL)a4 staticOIS:(BOOL)a5 reduceOisGhosting:(BOOL)a6;
- (void).cxx_destruct;

@end
