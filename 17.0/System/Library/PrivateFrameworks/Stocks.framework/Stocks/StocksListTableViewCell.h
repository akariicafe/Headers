@class Stock, UIImageView, UILabel, StocksListBoxView, UIView;

@interface StocksListTableViewCell : UITableViewCell {
    UILabel *_symbolLabel;
    UILabel *_priceLabel;
    UILabel *_boxLabel;
    StocksListBoxView *_boxView;
    UIImageView *_changeSignView;
    UIView *_rowSeparatorView;
}

@property (retain, nonatomic) Stock *stock;
@property (nonatomic) long long rowDataType;
@property (nonatomic) BOOL shouldStackView;

+ (double)cellHeightForStackStatus:(BOOL)a0;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)updateValues;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })changeButtonRect;
- (id)changeSignNegative:(BOOL)a0;
- (void)setBoxContentsAlpha:(double)a0 includeChangeSign:(BOOL)a1;
- (void)setBoxValueFromRowDataType;
- (void)setShowsRowSeparator:(BOOL)a0;

@end
