@class UIStackView;

@interface UIKBStackViewController : UIViewController

@property (readonly, nonatomic) UIStackView *stackView;

- (void)loadView;
- (void)removeChildViewController:(id)a0;
- (void)addChildViewController:(id)a0;

@end
