@class UILabel, UIStackView;

@interface PSUsageSizeHeader : UITableViewHeaderFooterView <PSHeaderFooterView>

@property (retain, nonatomic) UILabel *sizeLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *_internalStackView;

- (void)setSize:(id)a0;
- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0 inTableView:(id)a1;
- (void)_setupSubviewsAndConstraints;
- (void)setSizeLabelHidden:(BOOL)a0;

@end
