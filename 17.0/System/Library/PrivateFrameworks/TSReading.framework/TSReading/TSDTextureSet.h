@class NSDictionary, NSArray, TSDRep, NSMutableDictionary, CALayer, NSMutableArray, TSUNoCopyDictionary;

@interface TSDTextureSet : NSObject <NSCopying> {
    NSMutableArray *mTextures;
    TSUNoCopyDictionary *mStageIndexForTexture;
    NSMutableDictionary *mFinalTextureForStage;
    NSMutableDictionary *mReverseFinalTextureForStage;
    TSUNoCopyDictionary *mFinalTexturesToStageMap;
    TSUNoCopyDictionary *mReverseFinalTexturesToStageMap;
    NSDictionary *mBakedAttributes;
    struct _NSRange { unsigned long long location; unsigned long long length; } mActiveChunkIndices;
    CALayer *mLayer;
}

@property (readonly, nonatomic) long long maxStageIndex;
@property (readonly, nonatomic) long long stageIndex;
@property (readonly, nonatomic) unsigned long long chunkCount;
@property (readonly, nonatomic) NSArray *visibleTextures;
@property (readonly, nonatomic) NSMutableArray *allTextures;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) CALayer *layer;
@property (retain, nonatomic) CALayer *alternateLayer;
@property (nonatomic) BOOL isMagicMove;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } textureContentRect;
@property (nonatomic) double textureAngle;
@property (nonatomic) long long textureZOrder;
@property (nonatomic) double textureOpacity;
@property (nonatomic) BOOL isBackground;
@property (nonatomic) BOOL isBaked;
@property (nonatomic) BOOL shouldIncludeFinalTexturesInVisibleSet;
@property (nonatomic) BOOL shouldTransformUsingTextureCenter;
@property TSDRep *rep;
@property (retain, nonatomic) NSMutableDictionary *boundingRectForStage;
@property (retain, nonatomic) NSMutableDictionary *contentRectForStage;
@property (nonatomic) struct CGPoint { double x; double y; } originalPosition;
@property (nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly, nonatomic) BOOL isRenderable;

- (id)init;
- (void)dealloc;
- (void)teardown;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingRectForStage:(long long)a0 isBuildIn:(BOOL)a1;
- (void)p_resetAttributesWithViewScale:(double)a0;
- (void)addFinalTexture:(id)a0 forStage:(long long)a1 reverse:(BOOL)a2;
- (void)addPerspectiveLayerToTexture:(id)a0 withShowSize:(struct CGSize { double x0; double x1; })a1;
- (void)addRenderable:(id)a0;
- (void)addRenderable:(id)a0 forStage:(long long)a1;
- (void)adjustAnchorPointRelativeToCenterOfRotation;
- (void)applyActionEffect:(id)a0 viewScale:(double)a1 isMagicMove:(BOOL)a2 shouldBake:(BOOL)a3 applyScaleOnly:(BOOL)a4 ignoreScale:(BOOL)a5 shouldCheckActionKeys:(BOOL)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentRectForStage:(long long)a0 isBuildIn:(BOOL)a1;
- (id)finalTextureForStage:(long long)a0 reverse:(BOOL)a1;
- (id)firstVisibleTextureForTextureType:(int)a0;
- (void)hideLayersOfFinalTextures;
- (BOOL)isBackgroundTexture:(id)a0;
- (id)newFlattenedTexture;
- (id)newFlattenedTextureFromTextures:(id)a0 newRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)p_applyPositionFromAttributes:(id)a0 viewScale:(double)a1;
- (void)releaseSingleTextures;
- (void)removeRenderable:(id)a0;
- (void)renderIntoContext:(struct CGContext { } *)a0;
- (void)renderLayerContentsIfNeeded;
- (void)resetAnchorPoint;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forStage:(long long)a1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forStage:(long long)a1;
- (void)setLayerGeometryFromRep:(id)a0;
- (long long)stageIndexForTexture:(id)a0;
- (id)visibleTexturesForStage:(long long)a0 isBuildIn:(BOOL)a1 shouldFlatten:(BOOL)a2;

@end
