@class NSMutableDictionary, GLKShaderBlockNode, NSString, NSArray, NSMutableArray;

@interface GLKEffect : NSObject

@property (nonatomic) unsigned int vshName;
@property (nonatomic) unsigned int fshName;
@property (nonatomic) unsigned int numLights;
@property (nonatomic) unsigned int numTextures;
@property (nonatomic) unsigned int programName;
@property (readonly, nonatomic) GLKShaderBlockNode *vshRootNode;
@property (readonly, nonatomic) GLKShaderBlockNode *fshRootNode;
@property (nonatomic) char **vshStrings;
@property (nonatomic) char **fshStrings;
@property (nonatomic) unsigned int numVshStrings;
@property (nonatomic) unsigned int numFshStrings;
@property (nonatomic) id *effectShaderArray;
@property (retain, nonatomic) NSMutableArray *lightProperties;
@property (nonatomic) unsigned char masksInitialized;
@property (readonly, nonatomic) NSMutableDictionary *programHash;
@property (nonatomic) int lightModelAmbientColorLoc;
@property (nonatomic) int baseLightingColorLoc;
@property (nonatomic) int aColorLoc;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } baseLightingColor;
@property (readonly, nonatomic) float *materialAmbientColor;
@property (readonly, nonatomic) float *materialDiffuseColor;
@property (nonatomic) struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } *vshMask;
@property (nonatomic) struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } *fshMask;
@property (nonatomic) struct GLKBigInt_s { unsigned long long n0; unsigned long long n1; } prevVshMask;
@property (nonatomic) struct GLKBigInt_s { unsigned long long n0; unsigned long long n1; } prevFshMask;
@property (nonatomic) unsigned long long dirtyUniforms;
@property (nonatomic) BOOL textureOrderStale;
@property (retain, nonatomic) NSMutableArray *properties;
@property (nonatomic) unsigned char colorMaterialEnabled;
@property (nonatomic) unsigned char lightModelTwoSided;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } lightModelAmbientColor;
@property (nonatomic) unsigned char texturingEnabled;
@property (nonatomic) unsigned char perVertexLightingEnabled;
@property (nonatomic) unsigned char perPixelLightingEnabled;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSArray *textureOrder;

+ (void)initialize;
+ (void)initializeStaticMasks;
+ (BOOL)parseXMLFile:(id)a0 rootNode:(id)a1;
+ (id)programInfoLogForName:(unsigned int)a0 effectLabel:(id)a1 msg:(const char *)a2;
+ (void)setStaticMasksWithVshRoot:(id)a0 fshRoot:(id)a1;
+ (id)shaderInfoLogForName:(unsigned int)a0 effectLabel:(id)a1 msg:(const char *)a2;
+ (void)unrollLoopNodesForStaticTreeWithRoot:(id)a0;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)bind;
- (void)initializeMasks;
- (void)addTransformProperty;
- (void)createAndUseProgramWithShadingHash:(id)a0;
- (void)dirtyAllUniforms;
- (unsigned int)fshMaskCt;
- (char **)fshMaskStr;
- (struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } *)fshMasks;
- (BOOL)includeFshShaderTextForRootNode:(id)a0;
- (BOOL)includeShaderTextForRootNode:(id)a0;
- (BOOL)includeVshShaderTextForRootNode:(id)a0;
- (id)initWithPropertyArray:(id)a0;
- (void)setShaderBindings;
- (void)setTextureIndices;
- (void)updateFshStringsWithRoot:(id)a0 enabled:(struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; })a1;
- (void)updateVshStringsWithRoot:(id)a0 enabled:(struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)useColorAttrib;
- (BOOL)useTexCoordAttrib;
- (unsigned int)vshMaskCt;
- (char **)vshMaskStr;
- (struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } *)vshMasks;

@end
