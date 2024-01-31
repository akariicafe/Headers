@class NSArray, TSCH3DVector;

@interface TSCH3DTexturesMaterial : TSCH3DMaterial {
    TSCH3DVector *_color;
    NSArray *_textures;
    NSArray *_tilings;
}

@property (nonatomic) struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } color;

+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)textures;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasCompleteData;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (void)didInitFromSOS;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)variableTexture;
- (id)tilings;
- (void)addTexture:(id)a0 tiling:(id)a1;
- (id)firstTexture;
- (id)firstTiling;
- (unsigned long long)textureCount;
- (id)textureEnumerator;

@end
