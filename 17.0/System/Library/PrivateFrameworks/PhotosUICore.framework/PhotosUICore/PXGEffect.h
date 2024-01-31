@class PXGShader, PXGKernel, PXGEntityManager, NSObject;
@protocol OS_dispatch_queue;

@interface PXGEffect : NSObject {
    unsigned int _effectId;
    BOOL _didNotifyOfUse;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) PXGShader *shader;
@property (nonatomic) unsigned long long numberOfSiblingSprites;
@property (readonly, nonatomic) PXGKernel *kernel;
@property (nonatomic) double scale;
@property (nonatomic) double drawingScale;
@property (readonly, weak, nonatomic) PXGEntityManager *entityManager;
@property (readonly, nonatomic) unsigned int effectId;

+ (id)shaderSourceForFilename:(id)a0;

- (id)init;
- (void)dealloc;
- (id)initWithEntityManager:(id)a0;
- (id)description;
- (id)createSiblingsTextureForMainSpriteTexture:(id)a0;
- (void).cxx_destruct;
- (void)configureSiblingSprites:(struct { unsigned int x0; struct *x1; struct *x2; struct *x3; struct *x4; })a0 siblingsSpriteIndexRange:(struct _PXGSpriteIndexRange { unsigned int x0; unsigned int x1; })a1 siblingsTexture:(id)a2 forMainRenderSpriteRef:(struct { struct *x0; struct *x1; struct *x2; struct *x3; })a3 mainPresentationSpriteRef:(struct { struct *x0; struct *x1; struct *x2; struct *x3; })a4 mainSpriteIndex:(unsigned int)a5 mainSpriteTexture:(id)a6 screenScale:(double)a7;

@end
