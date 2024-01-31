@class UIStackView, UIView, NSArray, UIImageView, UIButton, UILayoutGuide, NSLayoutConstraint, UILabel;

@interface PPKQuickLookBannerView : UIView {
    UILayoutGuide *_contentLayoutGuide;
    UIView *_backgroundView;
    UIStackView *_titleStackView;
    NSArray *_regularSizeConstraints;
    NSArray *_compactSizeConstraints;
    NSArray *_extraCompactSizeConstraints;
    NSLayoutConstraint *_imageViewCollapsingConstraint;
    NSLayoutConstraint *_titleStackLeadingConstraint;
    BOOL _useExtraCompactLayout;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UILabel *subtitle;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UIButton *closeButton;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateImageViewWithConfiguration:(id)a0;
- (void)layoutSubviews;
- (void)_updateUI;
- (BOOL)_useCompactLayout;
- (long long)_numberOfTitleLines;
- (id)_compactSizeConstraints;
- (id)_extraCompactSizeConstraints;
- (BOOL)_isUsingAccessibilityContentSizeCategory;
- (long long)_numberOfSubtitleLines;
- (id)_regularSizeConstraints;
- (void)_setUseExtraCompactLayout:(BOOL)a0;
- (void)clearExistingActions:(id)a0;
- (void)populateWithConfiguration:(id)a0;

@end
