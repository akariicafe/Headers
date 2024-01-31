@class NSArray, OADShade, OADRelativeRect;

@interface OADGradientFill : OADFill {
    NSArray *mStops;
    OADRelativeRect *mTileRect;
    int mFlipMode;
    BOOL mIsFlipModeOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADShade *mShade;
}

+ (id)defaultProperties;
+ (id)stringForTileFlipMode:(int)a0;

- (void)setParent:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDefaults;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStops:(id)a0;
- (id)stops;
- (BOOL)rotateWithShape;
- (BOOL)areStopsOverridden;
- (id)firstStop;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (int)flipMode;
- (BOOL)isAnythingOverridden;
- (BOOL)isFlipModeOverridden;
- (BOOL)isRotateWithShapeOverridden;
- (BOOL)isShadeOverridden;
- (BOOL)isTileRectOverridden;
- (id)lastStop;
- (void)removeUnnecessaryOverrides;
- (void)setFlipMode:(int)a0;
- (void)setRotateWithShape:(BOOL)a0;
- (void)setShade:(id)a0;
- (void)setStyleColor:(id)a0;
- (void)setTileRect:(id)a0;
- (id)shade;
- (void)sortStops;
- (id)tileRect;
- (BOOL)usesPlaceholderColor;

@end
