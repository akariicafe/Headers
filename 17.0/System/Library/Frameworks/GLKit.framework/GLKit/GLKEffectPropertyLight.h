@class GLKEffectPropertyTransform;

@interface GLKEffectPropertyLight : GLKEffectProperty

@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } positionEye;
@property (nonatomic) union _GLKVector3 { struct { float x; float y; float z; } ; struct { float r; float g; float b; } ; struct { float s; float t; float p; } ; float v[3]; } normalizedSpotDirectionEye;
@property (nonatomic) float spotCutoffDegrees;
@property (nonatomic) int positionEyeLoc;
@property (nonatomic) int ambientLoc;
@property (nonatomic) int diffuseLoc;
@property (nonatomic) int specularLoc;
@property (nonatomic) int normalizedSpotDirectionEyeLoc;
@property (nonatomic) int spotExponentLoc;
@property (nonatomic) int spotCutoffLoc;
@property (nonatomic) int constantAttenuationLoc;
@property (nonatomic) int linearAttenuationLoc;
@property (nonatomic) int quadraticAttenuationLoc;
@property (nonatomic) int normalizeLoc;
@property (nonatomic) int ambientTermLoc;
@property (nonatomic) int lightIndex;
@property (nonatomic) unsigned long long *effectDirtyUniforms;
@property (nonatomic) int lightingType;
@property (nonatomic) unsigned char positionEyeStale;
@property (readonly, nonatomic) unsigned char isSpot;
@property (readonly, nonatomic) unsigned char isAttenuated;
@property (nonatomic) unsigned char firstLight;
@property (readonly, nonatomic) struct GLKBigInt_s { unsigned long long n0; unsigned long long n1; } allVshMasks;
@property (readonly, nonatomic) struct GLKBigInt_s { unsigned long long n0; unsigned long long n1; } allFshMasks;
@property (nonatomic) unsigned char enabled;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } position;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } ambientColor;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } diffuseColor;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } specularColor;
@property (nonatomic) union _GLKVector3 { struct { float x; float y; float z; } ; struct { float r; float g; float b; } ; struct { float s; float t; float p; } ; float v[3]; } spotDirection;
@property (nonatomic) float spotExponent;
@property (nonatomic) float spotCutoff;
@property (nonatomic) float constantAttenuation;
@property (nonatomic) float linearAttenuation;
@property (nonatomic) float quadraticAttenuation;
@property (retain, nonatomic) GLKEffectPropertyTransform *transform;

+ (void)setStaticMasksWithVshRoot:(id)a0 fshRoot:(id)a1;

- (void)dealloc;
- (id)description;
- (void)setNormalize:(unsigned char)a0;
- (void)bind;
- (void)initializeMasks;
- (void)dirtyAllUniforms;
- (BOOL)includeFshShaderTextForRootNode:(id)a0;
- (BOOL)includeVshShaderTextForRootNode:(id)a0;
- (id)initWithTransform:(id)a0 lightingType:(int)a1 firstLight:(unsigned char)a2;
- (void)setGLDefaults;
- (void)setShaderBindings;

@end
