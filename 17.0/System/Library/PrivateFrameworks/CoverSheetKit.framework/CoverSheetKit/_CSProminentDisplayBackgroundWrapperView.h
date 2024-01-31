@class UIView;

@interface _CSProminentDisplayBackgroundWrapperView : UIView

@property (weak, nonatomic) UIView *wrappedView;

- (void)insertSubview:(id)a0 belowSubview:(id)a1;
- (void)addSubview:(id)a0;
- (void)insertSubview:(id)a0 aboveSubview:(id)a1;
- (void)bringSubviewToFront:(id)a0;
- (void)insertSubview:(id)a0 atIndex:(long long)a1;
- (void)sendSubviewToBack:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)exchangeSubviewAtIndex:(long long)a0 withSubviewAtIndex:(long long)a1;

@end
