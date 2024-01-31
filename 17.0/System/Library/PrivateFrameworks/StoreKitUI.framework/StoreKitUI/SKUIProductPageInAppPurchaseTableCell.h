@class NSString, SKUIColorScheme, UILabel;

@interface SKUIProductPageInAppPurchaseTableCell : SKUITableViewCell {
    UILabel *_indexLabel;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (copy, nonatomic) NSString *indexString;
@property (copy, nonatomic) NSString *priceString;
@property (copy, nonatomic) NSString *productName;

- (void)setBackgroundColor:(id)a0;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;

@end
