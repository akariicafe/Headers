@class UIView, NSString, UIImage, _MKMarkerAnnotationBaseImageView, UIImageView, GEOFeatureStyleAttributes, MKWalletMerchantStylingInfo, _MKUILabel, UIColor;

@interface MKMarkerAnnotationView : MKAnnotationView {
    UIImageView *_shadow;
    _MKMarkerAnnotationBaseImageView *_markerView;
    _MKMarkerAnnotationBaseImageView *_selectedDotView;
    _MKMarkerAnnotationBaseImageView *_selectedMarkerView;
    UIImageView *_glyphImageView;
    _MKUILabel *_glyphLabel;
    UIImageView *_selectedGlyphImageView;
    _MKUILabel *_selectedGlyphLabel;
    UIView *_contentMaskView;
    MKWalletMerchantStylingInfo *_walletMerchantStylingInfo;
    BOOL _isObserving;
}

@property (retain, nonatomic, getter=_walletMerchantStylingInfo, setter=_setWalletMerchantStylingInfo:) MKWalletMerchantStylingInfo *walletMerchantStylingInfo;
@property (copy, nonatomic) UIColor *markerStrokeTintColor;
@property (nonatomic) double markerStrokeWidth;
@property (retain, nonatomic) UIView *selectedContentView;
@property (retain, nonatomic, getter=_styleAttributes, setter=_setStyleAttributes:) GEOFeatureStyleAttributes *styleAttributes;
@property (nonatomic) long long titleVisibility;
@property (nonatomic) long long subtitleVisibility;
@property (copy, nonatomic) UIColor *markerTintColor;
@property (copy, nonatomic) UIColor *glyphTintColor;
@property (copy, nonatomic) NSString *glyphText;
@property (copy, nonatomic) UIImage *glyphImage;
@property (copy, nonatomic) UIImage *selectedGlyphImage;
@property (nonatomic) BOOL animatesWhenAdded;

+ (float)_defaultDisplayPriority;
+ (Class)_mapkitLeafClass;

- (void)layoutSublayersOfLayer:(id)a0;
- (void)setAnnotation:(id)a0;
- (void)dealloc;
- (void)prepareForReuse;
- (void)prepareForSnapshotting;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)prepareForDisplay;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)_updateStyle;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (int)_blendMode;
- (void)_setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)traitEnvironment:(id)a0 didChangeTraitCollection:(id)a1;
- (void)_configureAnimated:(BOOL)a0 fromState:(long long)a1 toState:(long long)a2;
- (void)_configureViewsForState:(long long)a0 usesCallout:(BOOL)a1 animated:(BOOL)a2;
- (long long)_currentMarkerState;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_defaultCollisionAlignmentRectInsets;
- (void)_didDragWithVelocity:(struct CGPoint { double x0; double x1; })a0;
- (id)_effectiveGlyphImageForState:(long long)a0 isSystemProvided:(BOOL *)a1;
- (id)_effectiveGlyphText;
- (id)_effectiveGlyphTintColorForState:(long long)a0;
- (id)_effectiveMarkerStrokeTintColorForState:(long long)a0;
- (double)_effectiveMarkerStrokeWidthForState:(long long)a0;
- (id)_effectiveMarkerTintColorForState:(long long)a0;
- (double)_effectiveShadowAlphaForState:(long long)a0;
- (id)_effectiveSubtitlesIsCollidable:(BOOL *)a0;
- (BOOL)_hasDataRequiringCallout;
- (struct { struct CGSize { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; struct CGSize { double x0; double x1; } x4; struct CGSize { double x0; double x1; } x5; struct CGSize { double x0; double x1; } x6; })_metricsForState:(long long)a0;
- (void)_setShadowAlpha:(double)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 duration:(double)a2;
- (void)_setupNormalViewsIfNeeded;
- (void)_setupSelectedViewsIfNeededUsesCallout:(BOOL)a0;
- (BOOL)_shouldDeselectWhenDragged;
- (BOOL)_shouldRenderGradient;
- (long long)_stateForIsSelected:(BOOL)a0;
- (void)_swayAnimation;
- (void)_unhideForDisplay;
- (void)_updateContentForState:(long long)a0;
- (void)_updateContentForState:(long long)a0 forceUpdate:(BOOL)a1;
- (void)_updateFromMap;
- (BOOL)canShowCallout;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (BOOL)isProvidingCustomFeature;
- (void)setDragState:(unsigned long long)a0 animated:(BOOL)a1;
- (void)setSubtitleVisibility:(long long)a0;
- (void)setTitleVisibility:(long long)a0;
- (BOOL)updateCalloutViewIfNeededAnimated:(BOOL)a0;

@end
