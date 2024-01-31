@class NSString, UIView;

@interface CPSPanButton : UIButton <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateColors;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)layoutSubviews;
- (id)initWithDirection:(long long)a0;
- (void)_setupPanImages;

@end
