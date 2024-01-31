@class UIView;

@interface CKDetailsCell : UITableViewCell

@property (retain, nonatomic) UIView *topSeperator;
@property (retain, nonatomic) UIView *bottomSeperator;
@property (nonatomic) BOOL indentTopSeperator;
@property (nonatomic) BOOL indentBottomSeperator;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
