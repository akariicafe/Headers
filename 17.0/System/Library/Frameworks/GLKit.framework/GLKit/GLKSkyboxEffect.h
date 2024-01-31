@class GLKEffect, GLKEffectPropertyTransform, NSString, NSMutableArray, GLKEffectPropertyTexture;

@interface GLKSkyboxEffect : NSObject <GLKNamedEffect>

@property (readonly, nonatomic) NSMutableArray *propertyArray;
@property (nonatomic) unsigned char effectStale;
@property (nonatomic) unsigned char centerChanged;
@property (nonatomic) GLKEffect *effect;
@property (nonatomic) unsigned int programName;
@property (nonatomic) unsigned int vao;
@property (nonatomic) unsigned int positionVBO;
@property (nonatomic) unsigned int texCoordVBO;
@property (nonatomic) union _GLKVector3 { struct { float x; float y; float z; } ; struct { float r; float g; float b; } ; struct { float s; float t; float p; } ; float v[3]; } center;
@property (nonatomic) float xSize;
@property (nonatomic) float ySize;
@property (nonatomic) float zSize;
@property (readonly, nonatomic) GLKEffectPropertyTexture *textureCubeMap;
@property (readonly, nonatomic) GLKEffectPropertyTransform *transform;
@property (copy, nonatomic) NSString *label;

- (void)draw;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)prepareToDraw;
- (void)createAndBindVAOWithPositions:(float *)a0 texCoords:(float *)a1;
- (void)updateSkyboxEffect;

@end
