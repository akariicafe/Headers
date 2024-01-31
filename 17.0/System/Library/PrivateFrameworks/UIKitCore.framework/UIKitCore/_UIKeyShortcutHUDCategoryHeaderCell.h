@class _UIKeyShortcutHUDMenu;

@interface _UIKeyShortcutHUDCategoryHeaderCell : _UIKeyShortcutHUDMenuCell

@property (weak, nonatomic) _UIKeyShortcutHUDMenu *categoryMenu;

- (BOOL)canBecomeFocused;
- (void)updateConfigurationUsingState:(id)a0;
- (void).cxx_destruct;
- (id)preferredLayoutAttributesFittingAttributes:(id)a0;
- (void)configureWithCategory:(id)a0;
- (id)defaultContentConfiguration;

@end
