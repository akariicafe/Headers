@class HUHomeKitAccessorySettingsItemModuleController, HUHomeKitAccessorySettingsItemModule, NSString;

@interface HUHomeKitAccessorySettingsDetailsViewController : HUItemTableViewController <HFHomeKitAccessorySettingsDataSourceDelegate>

@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModule *collapsedModule;
@property (retain, nonatomic) HUHomeKitAccessorySettingsItemModuleController *moduleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)buildItemModuleControllerForModule:(id)a0;
- (void)didReceiveSettingsUpdatesForAccessoryWithIdentifier:(id)a0 settings:(id)a1;
- (void)dismissPrivacyController;
- (id)initWithCollapsedAccessorySettingItemModule:(id)a0;

@end
