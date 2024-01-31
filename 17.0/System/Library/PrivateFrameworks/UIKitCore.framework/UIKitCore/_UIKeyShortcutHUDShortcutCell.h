@class _UIKeyShortcutHUDShortcut, _UIKeyShortcutHUDShortcutInputAccessoryView;

@interface _UIKeyShortcutHUDShortcutCell : _UIKeyShortcutHUDMenuCell

@property (weak, nonatomic) _UIKeyShortcutHUDShortcut *shortcut;
@property (readonly, nonatomic) _UIKeyShortcutHUDShortcutInputAccessoryView *shortcutInputAccessoryView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)configureWithShortcut:(id)a0;

@end
