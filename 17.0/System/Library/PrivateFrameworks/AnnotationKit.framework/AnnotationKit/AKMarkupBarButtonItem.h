@class UIButton, AKMarkupButtonContainerView;

@interface AKMarkupBarButtonItem : UIBarButtonItem

@property (retain, nonatomic) UIButton *toggleButton;
@property (retain, nonatomic) AKMarkupButtonContainerView *toggleView;

+ (id)markupBarButtonWithTarget:(id)a0 action:(SEL)a1;

- (id)init;
- (void)setEnabled:(BOOL)a0;
- (void)setAction:(SEL)a0;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;

@end
