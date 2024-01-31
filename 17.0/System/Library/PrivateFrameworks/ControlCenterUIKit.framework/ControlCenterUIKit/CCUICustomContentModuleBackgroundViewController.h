@class UIView, NSString, UIImageView, NSMutableDictionary, UILabel, CCUICAPackageView, NSArray;

@interface CCUICustomContentModuleBackgroundViewController : UIViewController <CCUIContentModuleBackgroundViewController> {
    UILabel *_headerTitleLabel;
    UIImageView *_headerImageView;
    CCUICAPackageView *_packageView;
    NSMutableDictionary *_categoriesToVisualStylingProviders;
    NSArray *_footerButtons;
    UIView *_customHeaderView;
    UIView *_customFooterView;
}

@property (nonatomic) double expandedContentModuleHeight;
@property (nonatomic) double expandedContentModuleWidth;
@property (nonatomic) BOOL positionHeaderToRightInLandscapeRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_titleFont;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)setHeaderTitle:(id)a0;
- (void)_updateTitleFont;
- (void)viewWillLayoutSubviews;
- (id)visualStylingProviderForCategory:(long long)a0;
- (void)_contentSizeCategoryDidChange;
- (void)viewDidLoad;
- (void)setGlyphImage:(id)a0;
- (void)setGlyphPackageDescription:(id)a0;
- (void).cxx_destruct;
- (id)requiredVisualStyleCategories;
- (void)setGlyphState:(id)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })effectiveContentFrameForContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_visualStylingProvider:(id)a0 didChangeForCategory:(long long)a1 outgoingVisualStylingProvider:(id)a2;
- (void)setCustomHeaderView:(id)a0;
- (void)setFooterButtons:(id)a0;
- (BOOL)_shouldLimitContentSizeCategory;
- (struct CGPoint { double x0; double x1; })_footerCenterForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })_headerCenterForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateCustomFooterViewLayoutIfNecessary;
- (void)_updateCustomHeaderViewLayoutIfNecessary;
- (void)_updateFooterButtonsLayoutIfNecessary;
- (void)_updateHeaderGlyphVisualStylingWithProvider:(id)a0;
- (void)_updateHeaderLayoutIfNecessary;
- (void)setCustomFooterView:(id)a0;
- (void)setHeaderGlyphImage:(id)a0;
- (void)setHeaderGlyphImage:(id)a0 unscaledSymbolPointSize:(double)a1;
- (void)setHeaderGlyphPackageDescription:(id)a0;
- (void)setHeaderGlyphState:(id)a0;

@end
