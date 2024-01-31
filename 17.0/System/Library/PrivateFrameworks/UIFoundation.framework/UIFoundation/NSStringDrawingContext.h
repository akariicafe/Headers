@class NSString, CUICatalog, CUIStyleEffectConfiguration;

@interface NSStringDrawingContext : NSObject <NSLayoutManagerDelegate> {
    double _minimumTrackingAdjustment;
    struct { unsigned char _wantsNumberOfLineFragments : 1; unsigned char _wrapsForTruncationMode : 1; unsigned char _wantsBaselineOffset : 1; unsigned char _wantsScaledBaselineOffset : 1; unsigned char _wantsScaledLineHeight : 1; unsigned char _drawsDebugBaselines : 1; unsigned char _wantsMultipleDeviceMetrics : 1; unsigned char _cachesLayout : 1; unsigned char _usesSimpleTextEffects : 1; unsigned char _activeRenderers : 4; unsigned char _applicationPlatformContext : 3; } _sdcFlags;
}

@property (nonatomic) double minimumTrackingAdjustment;
@property (readonly, nonatomic) double actualTrackingAdjustment;
@property (nonatomic) double actualScaleFactor;
@property (nonatomic) double actualTrackingAdjustment;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalBounds;
@property (nonatomic) BOOL wantsNumberOfLineFragments;
@property (nonatomic) unsigned long long numberOfLineFragments;
@property (nonatomic) BOOL wrapsForTruncationMode;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) BOOL wantsBaselineOffset;
@property (nonatomic) double baselineOffset;
@property (nonatomic) BOOL wantsScaledBaselineOffset;
@property (nonatomic) double scaledBaselineOffset;
@property (nonatomic) BOOL wantsScaledLineHeight;
@property (nonatomic) double scaledLineHeight;
@property (nonatomic) double firstBaselineOffset;
@property (retain, nonatomic) CUICatalog *cuiCatalog;
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects;
@property (nonatomic) BOOL drawsDebugBaselines;
@property (nonatomic) BOOL cachesLayout;
@property (retain, nonatomic) id layout;
@property (nonatomic) BOOL usesSimpleTextEffects;
@property (nonatomic) unsigned long long activeRenderers;
@property (copy) id /* block */ linkTextAttributesProvider;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } multilineDeviceMetricsRect;
@property (nonatomic) BOOL wantsMultilineDeviceMetrics;
@property (nonatomic) double minimumScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)layoutManager:(id)a0 linkAttributesForAttributes:(id)a1 forCharacterAtIndex:(unsigned long long)a2;
- (id)init;
- (void)dealloc;
- (double)minimumTrackingAdjustment;
- (void)setApplicationFrameworkContext:(long long)a0;
- (long long)applicationFrameworkContext;
- (void)setMinimumTrackingAdjustment:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
