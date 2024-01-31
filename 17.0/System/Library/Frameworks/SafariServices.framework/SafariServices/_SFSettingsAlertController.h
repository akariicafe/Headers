@class _SFSettingsAlertItem, NSArray, _SFSettingsAlertContentController, NSString, UINavigationController;
@protocol _SFPopoverSourceInfo, _SFSettingsAlertControllerDelegate;

@interface _SFSettingsAlertController : UIViewController <SFPopoverSourceInfoProviding> {
    UINavigationController *_navigationController;
}

@property (readonly, nonatomic) _SFSettingsAlertContentController *_rootContentController;
@property (weak, nonatomic) id<_SFSettingsAlertControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *items;
@property (nonatomic) long long provenance;
@property (nonatomic) BOOL usesReverseOrder;
@property (retain, nonatomic) _SFSettingsAlertItem *focusedItem;
@property (readonly, nonatomic) id<_SFPopoverSourceInfo> safari_popoverSourceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllItems;
- (void)addItem:(id)a0;
- (id)presentingViewController;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_pushSubItemsForGroup:(id)a0;
- (void)addDivider;
- (void)pushViewController:(id)a0;
- (void)resizeMenu;

@end
