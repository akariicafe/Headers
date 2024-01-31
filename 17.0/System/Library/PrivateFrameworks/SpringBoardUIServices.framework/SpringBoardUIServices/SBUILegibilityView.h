@class SBUILegibilityContainerView, NSMutableDictionary, NSString, UIImage, SBUILegibilityShadowView, NSMutableArray;
@protocol SBUILegibilitySettings, SBUILegibilityEngine;

@interface SBUILegibilityView : UIView <SBUILegibilityResultDisplaying, SBUILegibilityEngineProviding> {
    SBUILegibilityShadowView *_shadowImageView;
    SBUILegibilityContainerView *_imageView;
    NSMutableArray *_runningAsyncOperations;
    double _appliedScale;
    BOOL _needsUpdateShadow;
    id<SBUILegibilityEngine> _legibilityEngine;
}

@property (nonatomic) double strength;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL hidesImage;
@property (nonatomic) BOOL usesColorFilters;
@property (nonatomic) BOOL backfillTemplateResults;
@property (retain, nonatomic) id<SBUILegibilitySettings> legibilitySettings;
@property (readonly, nonatomic) long long options;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } hitTestEdgeInsets;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (readonly, nonatomic) id<SBUILegibilityEngine> legibilityEngine;
@property (readonly, nonatomic) UIImage *shadowImage;
@property (readonly, nonatomic) UIImage *origImage;
@property (readonly, nonatomic) UIImage *strengthenedImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToSuperview:(id)a0;
- (double)_imageViewAlpha;
- (BOOL)_updateShadow;
- (id)drawingColor;
- (BOOL)usesSecondaryColor;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)setLegibilityEngine:(id)a0;
- (BOOL)_updateOptions:(long long)a0;
- (void)updateImage;
- (BOOL)_hideImageView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)_updateContentImageView:(id)a0;
- (void)updateOrigImage:(id)a0 shadowImage:(id)a1 strengthenedShadowImage:(id)a2 settings:(id)a3 engine:(id)a4 isTemplate:(BOOL)a5 withStrength:(double *)a6 context:(id)a7;
- (id)shadowColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (BOOL)_updateFilters;
- (void)layoutImageView;
- (double)_shadowImageViewAlphaForStrength:(double *)a0;
- (void)_redrawShadowForNewContainer;
- (void)setAlpha:(double)a0;
- (void)setHidden:(BOOL)a0;
- (void)updateForChangedSettings:(id)a0;
- (void)_cancelOperations;
- (void)updateForChangedSettings:(id)a0 options:(long long)a1;
- (BOOL)_updateSettings:(id)a0;
- (id)initWithSettings:(id)a0 strength:(double)a1 image:(id)a2;
- (BOOL)_hideShadowImageViewForStrength:(double *)a0;
- (void).cxx_destruct;
- (BOOL)_updateStrength:(double)a0;
- (void)layoutSubviews;
- (void)updateForChangedSettings:(id)a0 options:(long long)a1 image:(id)a2 strength:(double)a3;
- (void)_clearShadowAndMarkNeedsNew:(BOOL)a0;
- (void)didMoveToWindow;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
