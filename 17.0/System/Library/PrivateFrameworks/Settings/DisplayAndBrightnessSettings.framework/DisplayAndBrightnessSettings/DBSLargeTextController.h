@class DBSLargeTextSliderListController;

@interface DBSLargeTextController : PSListController {
    DBSLargeTextSliderListController *_sliderListController;
    DBSLargeTextSliderListController *_extendedRangeSliderListController;
    BOOL _usesExtendedRange;
}

@property (nonatomic) BOOL showsResetSliderButton;
@property (nonatomic) BOOL savesCategoryNameOnlyOnSliderEvent;
@property (nonatomic) BOOL showsExtendedRangeSwitch;

- (id)init;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)specifiers;
- (void).cxx_destruct;
- (void)sizeCategoryDidChange:(id)a0;
- (void)setUsesExtendedRange:(id)a0 forSpecifier:(id)a1;
- (id)usesExtendedRangeForSpecifier:(id)a0;
- (id)readPreferredContentSizeCategoryName;
- (BOOL)readUsesExtendedRange;
- (void)resetContentSizeCategoryName;
- (void)savePreferredContentSizeCategoryName:(id)a0;
- (void)saveUsesExtendedRange:(BOOL)a0;
- (void)updateSlider;
- (void)updateSlidersForNewUsesExtendedRangeValue:(BOOL)a0;

@end
