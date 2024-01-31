@class UIStackView, UIButton, UIImageView, NSArray, UIView, UILabel, NSLayoutConstraint;

@interface OBBulletedListItem : UIView

@property (retain, nonatomic) UIView *imageContainer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintVertical;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraintHorizontal;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) NSArray *imageContainerSizeConstraints;
@property (retain, nonatomic) NSLayoutConstraint *topConstraintToStackView;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraintToStackView;
@property (retain, nonatomic) NSLayoutConstraint *topConstraintToImageContainer;
@property (retain, nonatomic) NSLayoutConstraint *bottomConstraintToImageContainer;

- (id)_titleFont;
- (id)_descriptionFont;
- (void)traitCollectionDidChange:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)imageSizeForImage:(id)a0;
- (double)_horizontalMargins;
- (double)trailingMargins;
- (double)_combinedLabelHeight;
- (double)_imageTextPadding;
- (void)_updateImageViewLayout;
- (id)initWithTitle:(id)a0 description:(id)a1 image:(id)a2 tintColor:(id)a3;
- (id)initWithTitle:(id)a0 description:(id)a1 image:(id)a2 tintColor:(id)a3 linkButton:(id)a4;
- (id)initWithTitle:(id)a0 description:(id)a1 symbolName:(id)a2 tintColor:(id)a3;
- (id)initWithTitle:(id)a0 description:(id)a1 symbolName:(id)a2 tintColor:(id)a3 linkButton:(id)a4;
- (double)leadingMargins;
- (BOOL)shouldLayoutVertically;

@end
