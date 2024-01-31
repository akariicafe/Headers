@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController

@property (readonly, nonatomic) SUNavigationMenu *navigationMenu;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (long long)numberOfMenuItems;
- (void)_cancelAction:(id)a0;
- (void)_protocolButtonAction:(id)a0;
- (id)initWithNavigationMenu:(id)a0;
- (id)titleOfMenuItemAtIndex:(long long)a0;

@end
