@class NSString;

@interface _VKStickerEffectInternal : NSObject <VKStickerEffectInternal> {
    void /* unknown type, empty encoding */ comicParameters;
}

@property (class, nonatomic, readonly) _VKStickerEffectInternal *noneEffect;
@property (class, nonatomic, readonly) _VKStickerEffectInternal *strokeEffect;
@property (class, nonatomic, readonly) _VKStickerEffectInternal *comicEffect;
@property (class, nonatomic, readonly) _VKStickerEffectInternal *puffyEffect;
@property (class, nonatomic, readonly) _VKStickerEffectInternal *iridescentEffect;

@property (nonatomic) void /* unknown type, empty encoding */ type;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) void /* unknown type, empty encoding */ isStroked;
@property (nonatomic) void /* unknown type, empty encoding */ strokeRadius;
@property (nonatomic) void /* unknown type, empty encoding */ strokeBlurRadius;
@property (nonatomic) void /* unknown type, empty encoding */ smallStrokeRadiusMultiplier;
@property (nonatomic) void /* unknown type, empty encoding */ forceSmallStrokeRadiusMultiplier;
@property (nonatomic) void /* unknown type, empty encoding */ isPuffy;
@property (nonatomic) void /* unknown type, empty encoding */ normalsRadius;
@property (nonatomic) void /* unknown type, empty encoding */ iridescence;
@property (nonatomic) void /* unknown type, empty encoding */ applyIridescenceBeforeStroke;
@property (nonatomic) void /* unknown type, empty encoding */ isBrushed;
@property (nonatomic) void /* unknown type, empty encoding */ applyBrushBeforeStroke;
@property (nonatomic) void /* unknown type, empty encoding */ shadowRadius;
@property (nonatomic) void /* unknown type, empty encoding */ shadowAlpha;
@property (nonatomic) void /* unknown type, empty encoding */ shadowOffset;
@property (nonatomic) void /* unknown type, empty encoding */ shadowParallax;
@property (nonatomic) void /* unknown type, empty encoding */ smallShadowSizeMultiplier;
@property (nonatomic) void /* unknown type, empty encoding */ smallShadowAlphaMultiplier;
@property (nonatomic) void /* unknown type, empty encoding */ isComicEnabled;
@property (nonatomic, readonly) BOOL requiresDeviceMotion;
@property (nonatomic) void /* unknown type, empty encoding */ isCurlEnabled;

- (id)init;
- (void).cxx_destruct;
- (void)applyComicInkParameters;
- (void)applyComicParameters;

@end
