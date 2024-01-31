@class SBUISystemApertureCAPackageContentProvider, NSString, UIColor, FBScene, UILabel, SBUISystemApertureTextContentProvider, SBUISystemApertureCAPackageButton;

@interface SBFlashlightElement : SBSystemApertureProvidedContentElement <SAElementIdentifying, SBSystemApertureContextProviding, SBSystemApertureLayoutCustomizing> {
    double _sensorObstructionHeight;
    double _expandedHeight;
}

@property (readonly, nonatomic) SBUISystemApertureCAPackageContentProvider *leadingPackageViewProvider;
@property (readonly, nonatomic) SBUISystemApertureTextContentProvider *trailingTextProvider;
@property (readonly, nonatomic) SBUISystemApertureCAPackageButton *expandedLeadingPackageButton;
@property (readonly, nonatomic) UILabel *expandedTitleLabel;
@property (readonly, nonatomic) UILabel *expandedTrailingLabel;
@property (readonly, nonatomic) unsigned long long style;
@property (nonatomic) unsigned long long state;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isAffiliatedWithSessionMonitor) BOOL affiliatedWithSessionMonitor;
@property (readonly, nonatomic) UIColor *keyColor;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) BOOL preventsSwipeToHide;
@property (readonly, nonatomic) long long systemApertureCustomLayout;
@property (readonly, nonatomic) long long customLayoutRequestingSpecialFlowerBoundsResizingAnimation;
@property (readonly, nonatomic) long long systemApertureLayoutCustomizingOptions;

- (void).cxx_destruct;
- (void)_configureCustomViewsIfNecessary;
- (void)_handleExpandedLeadingButtonAction;
- (void)_layoutHuggingObstructionForLabel:(id)a0 x:(double)a1 width:(double)a2 maxLabelHeight:(double)a3;
- (id)_textColorForState:(unsigned long long)a0;
- (id)_titleColorForStyle:(unsigned long long)a0;
- (id)_titleTextForStyle:(unsigned long long)a0;
- (id)_trailingTextForState:(unsigned long long)a0;
- (double)concentricPaddingOverrideForView:(id)a0 inLayoutMode:(long long)a1;
- (void)contentProviderWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 inContainerView:(id)a1 transitionCoordinator:(id)a2;
- (id)initWithStyle:(unsigned long long)a0 state:(unsigned long long)a1;
- (BOOL)isProvidedViewConcentric:(id)a0 inLayoutMode:(long long)a1;
- (void)layoutHostContainerViewDidLayoutSubviews:(id)a0;
- (BOOL)overridesConcentricPaddingForView:(id)a0 inLayoutMode:(long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })preferredEdgeOutsetsForLayoutMode:(long long)a0 suggestedOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a1 maximumOutsets:(struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })a2;

@end
