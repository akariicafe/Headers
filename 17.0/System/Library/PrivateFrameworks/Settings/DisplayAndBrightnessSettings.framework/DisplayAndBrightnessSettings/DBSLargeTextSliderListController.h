@class NSArray, DBSLargeTextController, PSSpecifier;

@interface DBSLargeTextSliderListController : PSListController {
    PSSpecifier *_sliderGroupSpecifier;
    BOOL _viewIsDisappearing;
}

@property (copy, nonatomic) NSArray *contentSizeCategories;
@property (nonatomic) long long selectedCategoryIndex;
@property (nonatomic) BOOL showsExtendedRangeSwitch;
@property (nonatomic) BOOL usesExtendedRange;
@property (nonatomic) BOOL showsLargerSizesHelpText;
@property (nonatomic) BOOL showsResetSliderButton;
@property (weak, nonatomic) DBSLargeTextController *largeTextController;

- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)getDynamicTypeValueForSpecifier:(id)a0;
- (id)initUsingExtendedRange:(BOOL)a0;
- (void)setDynamicTypeValue:(id)a0 forSpecifier:(id)a1;
- (void)resetSliderValue;
- (void)updateSliderValue;

@end
