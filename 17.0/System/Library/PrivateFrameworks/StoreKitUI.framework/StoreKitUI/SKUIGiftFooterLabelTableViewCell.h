@class NSString, UILabel;

@interface SKUIGiftFooterLabelTableViewCell : UITableViewCell {
    UILabel *_footerLabel;
}

@property (copy, nonatomic) NSString *footerLabel;

- (void)setBackgroundColor:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
