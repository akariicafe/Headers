@class UIKeyboardMenuView;

@interface UIInputSwitcherTableView : UITableView

@property (nonatomic) UIKeyboardMenuView *menu;

- (void)deselectRowAtIndexPath:(id)a0 animated:(BOOL)a1;
- (void)selectRowAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(long long)a2;

@end
