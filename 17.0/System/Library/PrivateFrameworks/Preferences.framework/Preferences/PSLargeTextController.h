@class PSLargeTextSliderListController;

@interface PSLargeTextController : PSListController {
    PSLargeTextSliderListController *_sliderListController;
    PSLargeTextSliderListController *_extendedRangeSliderListController;
    BOOL _usesExtendedRange;
}

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

@end
