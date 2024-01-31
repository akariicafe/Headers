@class HUQuickControlCollectionViewController;

@interface HUQuickControlGridViewController : HUQuickControlViewController

@property (readonly, nonatomic) HUQuickControlCollectionViewController *collectionViewController;

+ (id)controlItemPredicate;

- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_subclass_configureQuickControlViewController:(id)a0;
- (id)childQuickControlContentViewControllers;
- (id)hu_preloadContent;
- (id)initWithControlItems:(id)a0 home:(id)a1 itemUpdater:(id)a2 controlOrientation:(unsigned long long)a3 preferredControl:(unsigned long long)a4;

@end
