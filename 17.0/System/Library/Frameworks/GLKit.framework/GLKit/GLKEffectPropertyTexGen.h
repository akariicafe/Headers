@interface GLKEffectPropertyTexGen : GLKEffectProperty

@property (nonatomic) float *eyePlaneByInvModelview;
@property (nonatomic) int modeLoc;
@property (nonatomic) int planeLoc;
@property (nonatomic) int eyePlaneByInvModelviewLoc;
@property (nonatomic) char *modeNameString;
@property (nonatomic) char *planeNameString;
@property (nonatomic) unsigned int textureIndex;
@property (nonatomic) int mode;
@property (readonly, nonatomic) int coord;
@property (nonatomic) float *plane;

- (id)init;
- (void)dealloc;
- (void)bind;
- (void)initializeMasks;
- (void)dirtyAllUniforms;
- (id)initWithMode:(int)a0 coord:(int)a1;
- (void)setShaderBindings;

@end
