@class NSString, SiriUIPlatterSectionHeaderView;

@interface SiriUIPlatterSectionHeaderTableViewCell : UITableViewCell {
    SiriUIPlatterSectionHeaderView *_headerView;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long textAlignment;

+ (id)_font;
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 text:(id)a1;

- (id)initWithText:(id)a0;
- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;

@end
