@class NSArray, SUScriptFunction;

@interface SUNativeScriptMenuViewController : SUMenuViewController

@property (retain, nonatomic) SUScriptFunction *action;
@property (retain, nonatomic) NSArray *menuItems;

- (void)dealloc;
- (long long)numberOfMenuItems;
- (id)copyScriptViewController;
- (BOOL)isMenuItemEnabledAtIndex:(long long)a0;
- (void)performActionForMenuItemAtIndex:(long long)a0;
- (id)titleOfMenuItemAtIndex:(long long)a0;

@end
