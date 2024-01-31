@class NSString, NSArray, UIImageView, UIImage, UILabel, NSLayoutConstraint, WFContentItem;

@interface WFRichContentItemCellView : UIView

@property (retain, nonatomic) WFContentItem *item;
@property (weak, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) UILabel *altLabel;
@property (weak, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL hasImage;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageRoundingStyle;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageLeadingConstraint;
@property (copy, nonatomic) NSArray *firstRowConstraintsWithAltText;
@property (copy, nonatomic) NSArray *firstRowConstraintsWithoutAltText;
@property (copy, nonatomic) NSArray *verticalConstraintsWithSubtitle;
@property (copy, nonatomic) NSArray *verticalConstraintsWithoutSubtitle;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (readonly, nonatomic) NSString *accessibilityLabel;
@property (nonatomic) BOOL alwaysLeftAlign;

- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void)setSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)imageDimension;
- (void)setAttributedAlertButton:(id)a0;
- (void)setContentAlertButton:(id)a0;
- (void)setImage:(id)a0 options:(id)a1;
- (void)setSelectableAlertButton:(id)a0;
- (void)updateImageCornerRadius;

@end
