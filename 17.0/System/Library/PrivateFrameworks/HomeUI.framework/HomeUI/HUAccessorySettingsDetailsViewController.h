@class HUAccessorySettingsItemModuleController, NSString, HFAccessorySettingItem, HFAccessorySettingGroupItem;

@interface HUAccessorySettingsDetailsViewController : HUItemTableViewController <HUAccessorySettingsItemModuleControllerDelegate, HUAccessorySettingsDetailsViewControllerProtocol>

@property (retain, nonatomic) HFAccessorySettingGroupItem *groupItem;
@property (retain, nonatomic) HUAccessorySettingsItemModuleController *accessorySettingsItemModuleController;
@property (retain, nonatomic) HFAccessorySettingItem *fileUploadItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessorySettingsItemManager;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)itemModuleControllers;
- (void)moduleController:(id)a0 presentGroup:(id)a1;
- (id)moduleController:(id)a0 requestPresentViewController:(id)a1 animated:(BOOL)a2;

@end
