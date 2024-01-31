@class SBFFluidBehaviorSettings, UIPageControl, SBFolder, SBIconListPageControl, UIViewFloatAnimatableProperty, UIView;

@interface SBFolderScrollAccessoryView : UIView

@property (retain, nonatomic) UIPageControl *layoutPageControl;
@property (readonly, nonatomic) UIViewFloatAnimatableProperty *modeAnimatableProperty;
@property (readonly, nonatomic) SBFFluidBehaviorSettings *pageControlFadeInSettings;
@property (readonly, nonatomic) SBFFluidBehaviorSettings *auxiliaryViewFadeInSettings;
@property (readonly, nonatomic) SBFolder *folder;
@property (readonly, nonatomic) SBIconListPageControl *pageControl;
@property (retain, nonatomic) UIView *auxiliaryView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) long long mode;

- (void)dealloc;
- (id)_pageIndicatorsView;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_getCustomPaddingForNumberOfPages:(unsigned long long)a0 backgroundViewSize:(struct CGSize { double x0; double x1; })a1 horizontalPadding:(double *)a2 verticalPadding:(double *)a3 layoutPageControl:(id *)a4;
- (void)_updateForModePropertyChanged;
- (void).cxx_destruct;
- (id)initWithFolder:(id)a0 pageControl:(id)a1;
- (id)_layoutPageControlConfiguredForNumberOfPages:(long long)a0;
- (long long)_numberOfPagesForWidth:(double)a0 maxPageCount:(unsigned long long)a1;
- (void)_applyMatchingAnimationsForAuxiliaryViewMatchingContentView:(id)a0;
- (void)layoutSubviews;
- (void)_clearMatchingAnimationsForAuxiliaryView;
- (id)_layoutPageControlMatchingPageControl:(id)a0;
- (void)_applyCurrentMode;
- (void)_setUpAnimation;

@end
