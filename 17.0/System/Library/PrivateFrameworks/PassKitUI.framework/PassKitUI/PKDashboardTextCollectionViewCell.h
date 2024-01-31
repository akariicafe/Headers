@class UIColor, NSString, UIImageView, UIImage, UILabel;

@interface PKDashboardTextCollectionViewCell : PKDashboardCollectionViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIImageView *_titleImageView;
    UILabel *_subtitleLabel;
    UIImageView *_subtitleImageView;
    UIImageView *_accessoryImageView;
    UIImageView *_disclosureView;
}

@property (nonatomic) long long textLayoutStyle;
@property (retain, nonatomic) UIImage *iconImage;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *titleImage;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *subtitleImage;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (retain, nonatomic) UIImage *accessoryImage;
@property (retain, nonatomic) UIColor *accessoryColor;
@property (nonatomic) BOOL hideDisclosure;

- (id)_titleFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_subtitleFont;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_defaultAccessoryColor;
- (id)_defaultSubtitleColor;
- (id)_defaultTitleColor;
- (double)_maxWidthForTransactionCellInWidth:(double)a0;
- (void)_setAccessoryImageAfterApplyingSymbolConfiguration;
- (void)_setFonts;
- (void)_setIconImageAfterApplyingSymbolConfiguration;
- (void)_setSubtitleImageAfterApplyingSymbolConfiguration;
- (void)_setTitleImageAfterApplyingSymbolConfiguration;

@end
