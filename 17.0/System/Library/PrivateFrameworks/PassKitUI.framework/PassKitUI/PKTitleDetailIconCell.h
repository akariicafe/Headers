@class UIFont, NSString, UIColor, UIImage, UILabel, UIImageView;

@interface PKTitleDetailIconCell : UICollectionViewListCell {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_iconView;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIFont *titleFont;
@property (retain, nonatomic) UIFont *detailFont;
@property (retain, nonatomic) UIColor *titleTextColor;
@property (retain, nonatomic) UIColor *detailTextColor;
@property (nonatomic) BOOL centerTitleText;
@property (nonatomic) BOOL centerDetailText;
@property (nonatomic) double additionalIconPadding;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configureView;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplateLayout:(BOOL)a1;

@end
