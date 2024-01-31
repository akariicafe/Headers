@interface PSKeyboardNavigationSearchBar : UISearchBar

- (id)keyCommands;
- (void)_escapeKeyPressed;
- (void)_downArrowKeyPressed;
- (void)_upArrowKeyPressed;

@end
