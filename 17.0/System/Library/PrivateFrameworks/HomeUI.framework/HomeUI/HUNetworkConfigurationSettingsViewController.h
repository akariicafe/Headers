@class HUNetworkConfigurationSettingsModuleController, HUNetworkConfigurationSettingsItemManager, NSString;

@interface HUNetworkConfigurationSettingsViewController : HUItemTableViewController <UITextViewDelegate>

@property (readonly, nonatomic) HUNetworkConfigurationSettingsItemManager *itemManager;
@property (retain, nonatomic) HUNetworkConfigurationSettingsModuleController *networkConfigurationSettingsModuleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)buildItemModuleControllerForModule:(id)a0;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)initWithNetworkConfigurationGroupItem:(id)a0;
- (void)itemManagerDidFinishUpdate:(id)a0;
- (void)updateNetworkConfigurationSettingsModuleFooter;

@end
