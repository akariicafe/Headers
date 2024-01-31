@class _VKStickerEffectInternal, VKCStickerEffectView;

@interface VKCStickerEffect : NSObject

@property (readonly, nonatomic) _VKStickerEffectInternal *internalEffect;
@property (retain, nonatomic) VKCStickerEffectView *viewForRendering;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long iridescence;
@property (nonatomic) BOOL isStroked;
@property (nonatomic) double strokeRadius;
@property (nonatomic) float strokeBlurRadius;
@property (nonatomic) float smallStrokeRadiusMultiplier;
@property (nonatomic) float smallShadowSizeMultiplier;
@property (nonatomic) float smallShadowAlphaMultiplier;
@property (nonatomic) BOOL isPuffy;
@property (nonatomic) double normalsRadius;
@property (nonatomic) BOOL isBrushed;
@property (nonatomic) BOOL applyBrushBeforeStroke;
@property (nonatomic) BOOL applyIridescenceBeforeStroke;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGPoint { double x; double y; } shadowOffset;
@property (nonatomic) struct CGPoint { double x; double y; } shadowParallax;
@property (nonatomic) BOOL isComicEnabled;
@property (nonatomic) BOOL isInkEnabled;
@property (nonatomic) BOOL isCurlEnabled;
@property (nonatomic) BOOL forceSmallStrokeRadiusMultiplier;
@property (readonly, nonatomic) BOOL requiresDeviceMotion;

+ (id)effectWithType:(unsigned long long)a0;
+ (id)comicEffect;
+ (id)effectFromInternalEffect:(id)a0;
+ (int)internalIridescenceFromVKC:(unsigned long long)a0;
+ (id)iridescentEffect;
+ (id)noneEffect;
+ (id)puffyEffect;
+ (id)strokeEffect;
+ (unsigned long long)vkcIridescenceFromInternal:(int)a0;

- (id)initInternal;
- (id)description;
- (void).cxx_destruct;
- (void)_applyToImage:(id)a0 completion:(id /* block */)a1;
- (void)_applyToImageSequence:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)applyToImage:(id)a0 completion:(id /* block */)a1;
- (void)applyToImageSequence:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;

@end
