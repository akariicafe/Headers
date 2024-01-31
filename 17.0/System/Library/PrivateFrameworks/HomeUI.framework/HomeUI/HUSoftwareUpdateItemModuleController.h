@class NSString, HUSoftwareUpdateItemModule, NSMapTable;
@protocol HUExpandableTextViewCellDelegate, HUSoftwareUpdateItemModuleControllerDelegate;

@interface HUSoftwareUpdateItemModuleController : HUItemModuleController <HUSoftwareUpdateUIPresentationDelegate, HULockupViewDelegate>

@property (readonly, nonatomic) HUSoftwareUpdateItemModule *module;
@property (readonly, nonatomic) NSMapTable *serviceGridViewControllersByItems;
@property (readonly, nonatomic) NSMapTable *expandedStateByItems;
@property (readonly, weak, nonatomic) id<HUSoftwareUpdateItemModuleControllerDelegate> delegate;
@property (readonly, weak, nonatomic) id<HUExpandableTextViewCellDelegate> expandableTextViewCellDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;
- (BOOL)canSelectItem:(id)a0;
- (void)_startUpdateOnAccessories:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (id)initWithModule:(id)a0 delegate:(id)a1 expandableTextViewCellDelegate:(id)a2;
- (void)lockupView:(id)a0 downloadControlTapped:(id)a1;
- (void)lockupView:(id)a0 expandableTextViewDidExpand:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (id)softwareUpdateUIManager:(id)a0 dismissViewController:(id)a1;
- (id)softwareUpdateUIManager:(id)a0 presentViewController:(id)a1;
- (void)updateAllAccessories;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
