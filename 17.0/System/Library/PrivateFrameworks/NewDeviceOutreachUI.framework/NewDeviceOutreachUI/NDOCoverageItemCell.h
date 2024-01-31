@class UIImageView, UILabel, UIView, NSMutableArray;

@interface NDOCoverageItemCell : PSTableCell {
    NSMutableArray *_imageConstraints;
    BOOL _hasOffer;
}

@property (retain, nonatomic) UIImageView *itemImageView;
@property (retain, nonatomic) UIView *itemTitleView;
@property (retain, nonatomic) UILabel *itemTitleLabel;
@property (retain, nonatomic) UILabel *itemSubtitleLabel;
@property (retain, nonatomic) UILabel *itemOfferLabel;

+ (long long)cellStyle;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_setupWarrantyCoverageCell;
- (void)updateDeviceImageWithDeviceInfo:(id)a0;
- (void)updateOfferLabelForDeviceInfo:(id)a0;

@end
