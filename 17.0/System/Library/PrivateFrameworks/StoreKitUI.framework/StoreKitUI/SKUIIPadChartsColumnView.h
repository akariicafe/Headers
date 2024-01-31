@class NSArray, UIViewController;

@interface SKUIIPadChartsColumnView : UIView {
    long long _selectedViewControllerIndex;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (copy, nonatomic) NSArray *contentViewControllers;
@property (readonly, nonatomic) UIViewController *selectedViewController;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelectedViewControllerIndex:(long long)a0;
- (void)_addSelectedViewController;

@end
