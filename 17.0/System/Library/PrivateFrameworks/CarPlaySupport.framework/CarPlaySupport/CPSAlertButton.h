@class CPAlertAction;

@interface CPSAlertButton : CPSButton

@property (retain, nonatomic) CPAlertAction *alertAction;

+ (id)buttonWithCPAlertAction:(id)a0;

- (id)_externalUnfocusedBorderColor;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)_buttonFont;

@end
