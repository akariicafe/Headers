@class UIStackView, CPUIHighlightButton, NSArray, UIImage, UIView, UIImageView, NSMutableArray, NSLayoutConstraint, UIActivityIndicatorView, UILabel;

@interface CPUIImageRowCell : _CPUIBaseTableCell {
    BOOL _needsArtworkImagesLayout;
    struct CGSize { double width; double height; } _lastKnownBoundingSize;
}

@property (retain, nonatomic) NSMutableArray *reusableMediaViews;
@property (copy, nonatomic) NSArray *artworkCatalogs;
@property (retain, nonatomic) CPUIHighlightButton *focusIndicator;
@property (retain, nonatomic) UIImageView *chevronView;
@property (retain, nonatomic) UIImage *fallbackImage;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (copy, nonatomic) id /* block */ selectGridItemBlock;
@property (copy, nonatomic) id /* block */ selectTitleBlock;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSLayoutConstraint *stackViewWidthConstraint;
@property (retain, nonatomic) UIView *trailingView;
@property (retain, nonatomic) UILabel *titleLabel;

+ (double)rowHeight;
+ (double)minimumHeight;

- (void)setLoading:(BOOL)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (void)applyConfiguration:(id)a0;
- (void)_updateTintColors;
- (void)_layoutArtworkImagesIfNeeded;
- (void)_removeArtworkButton:(id)a0;
- (void)_setNeedsArtworkImagesLayout;
- (long long)artworkViewCountThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)configureCell;
- (void)coreCellItemTapped:(id)a0;
- (void)gridCellItemTapped:(id)a0;

@end
