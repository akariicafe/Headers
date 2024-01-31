@class UILabel, UIView;

@interface HKNumberedListItemView : UIView

@property (nonatomic) unsigned long long number;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIView *numberLabelBackground;

+ (id)createNumberedViewWithInteger:(unsigned long long)a0;
+ (struct CGSize { double x0; double x1; })listItemSize;
+ (id)numberFont;

- (void)setTintColor:(id)a0;
- (id)initWithInteger:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setUpConstraints;
- (void)_setUpUI;

@end
