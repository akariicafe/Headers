@class UIView;

@interface PUAssetPickerSortOrderHeaderView : UIView

@property (readonly, nonatomic) UIView *view;
@property (nonatomic) long long sortOrderType;

+ (id)_titleForSortOrderType:(long long)a0;

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSortOrderType:(long long)a0 sortOrderMenu:(id)a1;

@end
