@class NSArray, PSSpecifier;

@interface PSLargeTextSliderListController : PSListController {
    PSSpecifier *_sliderGroupSpecifier;
    BOOL _viewIsDisappearing;
}

@property (copy, nonatomic) NSArray *contentSizeCategories;
@property (nonatomic) long long selectedCategoryIndex;
@property (nonatomic) BOOL showsExtendedRangeSwitch;
@property (nonatomic) BOOL usesExtendedRange;
@property (nonatomic) BOOL showsLargerSizesHelpText;

- (void)viewWillAppear:(BOOL)a0;
- (void)loadView;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)getDynamicTypeValueForSpecifier:(id)a0;
- (id)initUsingExtendedRange:(BOOL)a0;
- (void)setDynamicTypeValue:(id)a0 forSpecifier:(id)a1;

@end
