@class NSString, UIImageView, UIImage, UILabel;

@interface PKDashboardStackedImageCollectionViewCell : PKDashboardCollectionViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_tertiaryLabel;
}

@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *tertiaryText;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_contentHeightWithWidth:(double)a0;
- (double)_maxWidthForTransactionCellInWidth:(double)a0;

@end
