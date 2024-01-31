@class UIFont;

@interface CPSStyledTextButton : CPSButton

@property (retain, nonatomic) UIFont *fontOverride;

+ (id)buttonWithTextButton:(id)a0;

- (id)_externalUnfocusedBorderColor;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFocused;
- (void).cxx_destruct;
- (id)_buttonFont;

@end
