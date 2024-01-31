@class MTMaterialView, NSString, BSUICAPackageView, UILabel, UIScrollView, UIButton;
@protocol AMUIOnboardingViewDelegate;

@interface AMUIOnboardingView : UIView <UIScrollViewDelegate> {
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    BSUICAPackageView *_packageView;
    unsigned long long _packageViewStateIndex;
    UIButton *_continueButton;
    UIScrollView *_containerScrollView;
    MTMaterialView *_continueButtonOcclusionMaterialView;
    BOOL _showContinueButtonOcclusionMaterialView;
}

@property (weak, nonatomic) id<AMUIOnboardingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_containerScrollView;
- (void)_setContent:(id)a0;
- (void)_layoutTitleLabelIfNecessary;
- (void)_configureContainerScrollViewIfNecessary;
- (void)_configureContinueButtonIfNecessary;
- (void)_configureContinueButtonOcclusionMaterialViewIfNecessary;
- (void)_configurePackageViewIfNecessary;
- (double)_contentAllowedWidthForSize:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutContainerScrollViewIfNecessary;
- (void)_layoutContentLabelIfNecessary;
- (void)_layoutContinueButtonIfNecessary;
- (void)_layoutContinueButtonOcclusionMaterialViewIfNecessary;
- (void)_layoutPackageViewIfNecessary;
- (id)_onboardingTitle;
- (id)_onboardingViewPackageName;
- (void)_performNextAnimationForPackageViewAnimated:(BOOL)a0;
- (void)_toggleContinueButtonOcclusionMaterialViewVisibilityIsVisible:(BOOL)a0 animated:(BOOL)a1;

@end
