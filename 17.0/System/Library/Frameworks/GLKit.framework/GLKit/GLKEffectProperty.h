@class GLKEffect;

@interface GLKEffectProperty : NSObject {
    struct GLKEffectPropertyPrv { struct GLKBigInt_s *x0; struct GLKBigInt_s *x1; struct GLKBigInt_s *x2; struct GLKBigInt_s *x3; id x4; } *_prv;
}

@property (nonatomic) int location;
@property (nonatomic) char *nameString;
@property (nonatomic) char *vshSource;
@property (nonatomic) char *fshSource;
@property (nonatomic) unsigned long long dirtyUniforms;
@property (nonatomic) unsigned char masksInitialized;
@property (nonatomic) GLKEffect *effect;

+ (void)logSetMasksWithLabel:(id)a0 obj:(id)a1 typeStr:(id)a2;
+ (void)setStaticMasksWithVshRoot:(id)a0 fshRoot:(id)a1;

- (id)init;
- (void)dealloc;
- (void)bind;
- (struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } *)fshMask;
- (void)initializeMasks;
- (struct GLKBigInt_s { unsigned long long x0; unsigned long long x1; } *)vshMask;
- (void)dirtyAllUniforms;
- (BOOL)includeFshShaderTextForRootNode:(id)a0;
- (BOOL)includeVshShaderTextForRootNode:(id)a0;
- (void)setFSHSource:(char *)a0;
- (void)setMasks;
- (void)setShaderBindings;
- (void)setVSHSource:(char *)a0;

@end
