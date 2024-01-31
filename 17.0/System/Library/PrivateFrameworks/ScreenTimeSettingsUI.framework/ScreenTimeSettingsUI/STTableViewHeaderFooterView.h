@class NSArray, UILayoutGuide;

@interface STTableViewHeaderFooterView : UITableViewHeaderFooterView

@property (copy, nonatomic) NSArray *rtlContentLayoutGuideConstraints;
@property (readonly, nonatomic) UILayoutGuide *contentLayoutGuide;

- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0 useLayoutMarginsGuide:(BOOL)a1;

@end
