@class NSHashTable, NSDate, _CSProminentDisplayBackgroundWrapperView, CSProminentLayoutController, BSUIVibrancyEffectView, UIView, BSUIVibrancyShadowView, CSProminentTimeView, BSUIOrientationTransformWrapperView, NSMutableArray, CSProminentTextElementView, CSProminentEmptyElementView;

@interface CSProminentDisplayView : UIView

@property (class, readonly, nonatomic) NSHashTable *overrideObservingDisplayViews;

@property (readonly, nonatomic) CSProminentLayoutController *layoutController;
@property (nonatomic) BOOL animatingTransientSubtitleTransition;
@property (nonatomic) BOOL animatingTransientSubtitleTransitionToTransient;
@property (retain, nonatomic) NSMutableArray *pendedTransientSubtitleViews;
@property (nonatomic) BOOL hasClearedSinceLastAddedTransient;
@property (retain, nonatomic) BSUIOrientationTransformWrapperView *backgroundTransformView;
@property (retain, nonatomic) _CSProminentDisplayBackgroundWrapperView *backgroundWrapperView;
@property (copy, nonatomic) NSDate *displayDate;
@property (copy, nonatomic) NSDate *overrideDate;
@property (readonly, nonatomic) BSUIVibrancyEffectView *vibrancyEffectView;
@property (readonly, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) BSUIVibrancyShadowView *vibrancyShadowView;
@property (retain, nonatomic) CSProminentTimeView *timeView;
@property (retain, nonatomic) CSProminentTextElementView *subtitleView;
@property (retain, nonatomic) CSProminentEmptyElementView *subtitleComplicationView;
@property (retain, nonatomic) CSProminentEmptyElementView *complicationRowView;
@property (retain, nonatomic) CSProminentEmptyElementView *complicationSidebarView;
@property (retain, nonatomic) CSProminentTextElementView *transientSubtitleView;
@property (retain, nonatomic) CSProminentTextElementView *customSubtitleView;
@property (nonatomic) double subtitleAlpha;
@property (nonatomic) BOOL usesEditingLayout;
@property (nonatomic) BOOL shouldApplyVibrancyToComplications;

+ (id)_startObservingSystemStatusOverridesIfNeededAndFetchInitialOverride;

- (void)setNumberingSystem:(id)a0;
- (void)updateContainerOrientationForBackgroundViews:(long long)a0;
- (void)_showTransientSubtitleView:(id)a0;
- (id)_complicationsSuperview;
- (void)_updateVisibilityForNonTransientSubtitleViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setUpTimeStringOverriding;
- (void)_transitionToNextPendedSubtitleIfNecessary;
- (void)_showTransientSubtitleView:(id)a0 withDelay:(double)a1;
- (void)_addComplicationSubview:(id)a0;
- (void)_setOverrideDate:(id)a0;
- (id)_contentView;
- (void)_applyContainerOrientationToVibrancyShadowView:(long long)a0;
- (void).cxx_destruct;
- (id)_effectiveDisplayDate;
- (void)_transitionToNextPendedSubtitleIfNecessaryWithDelay:(double)a0;
- (void)_updateEffectiveDisplayDate;
- (void)layoutSubviews;
- (void)_applyAlphaToNonTransientSubtitleViews:(double)a0;
- (void)_updateAlphaForNonTransientSubtitleViews;

@end
