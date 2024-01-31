@interface HealthExperienceUI.OnboardingStackedItemViewController : HealthExperienceUI.OnboardingViewControllerWithNextButton {
    void /* unknown type, empty encoding */ nextIndexToAnimate;
    void /* unknown type, empty encoding */ isAnimating;
    void /* unknown type, empty encoding */ backgroundViews;
    void /* unknown type, empty encoding */ stackedItems;
    void /* unknown type, empty encoding */ shouldNextButtonDisplayContinueOnLastItem;
    void /* unknown type, empty encoding */ shouldUseDynamicHorizontalMargins;
    void /* unknown type, empty encoding */ contentViewBottomConstraint;
    void /* unknown type, empty encoding */ titleToItemsTopConstraint;
    void /* unknown type, empty encoding */ horizontalConstraints;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)nextButtonTapped:(id)a0;
- (void)widthDesignationDidChangeWithTraitEnvironment:(id)a0 previousTraitCollection:(id)a1;

@end
