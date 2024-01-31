@class UIFont, NSString, UIImage, UIView, LAUICheckmarkLayer, UISearchBar, UIActivityIndicatorView, UILabel;
@protocol PKCollapsibleHeaderViewDelegate;

@interface PKCollapsibleHeaderView : UIView <UISearchBarDelegate> {
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UISearchBar *_searchBar;
    UIActivityIndicatorView *_activityIndicator;
    LAUICheckmarkLayer *_checkmarkLayer;
    struct CGSize { double width; double height; } _imageSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cachedTimeLabelFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _titleLabelLastLineBounds;
    double _titleLabelLastLineDescent;
}

@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIView *topArtView;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL removeAdditionalTopPadding;
@property (nonatomic) double additionalTopPadding;
@property (nonatomic) double additionalBottomPadding;
@property (readonly, nonatomic) double maxHeight;
@property (readonly, nonatomic) double minHeight;
@property (nonatomic) BOOL showSearchBar;
@property (nonatomic) BOOL showSpinner;
@property (nonatomic) BOOL showCheckmark;
@property (nonatomic) BOOL titleShouldReserveSpaceForAccessories;
@property (weak, nonatomic) id<PKCollapsibleHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)searchBarCancelButtonClicked:(id)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)searchBarShouldBeginEditing:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (void)_contentSizeCategoryDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_titleTopPadding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessoryFrameForTitleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 accessorySize:(struct CGSize { double x0; double x1; })a1;
- (void)_hide:(BOOL)a0 view:(id)a1 animated:(BOOL)a2;
- (struct { double x0; double x1; double x2; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;
- (double)_maxTitleWidthInsideFrameWidth:(double)a0 reserveSpace:(BOOL)a1;
- (void)_setLabelFonts;
- (double)_topArtTopPadding;
- (void)_updateCheckmarkColor;
- (struct { double x0; double x1; double x2; })heightBoundsForWidth:(double)a0;
- (void)hideTitleView:(BOOL)a0 animated:(BOOL)a1;
- (void)hideView:(BOOL)a0 animated:(BOOL)a1;
- (void)setSearchBarDefaultText:(id)a0;
- (void)setTitle:(id)a0 subtitle:(id)a1;

@end
