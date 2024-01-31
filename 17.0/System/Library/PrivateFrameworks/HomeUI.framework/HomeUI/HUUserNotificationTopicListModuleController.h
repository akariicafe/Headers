@class HFPinCodeManager;

@interface HUUserNotificationTopicListModuleController : HUItemModuleController

@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;

- (void).cxx_destruct;
- (BOOL)canSelectItem:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (id)presentNotificationSettingsForTopic:(id)a0 animated:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (id)showNotificationSettingsForHomeKitObject:(id)a0 animated:(BOOL)a1;

@end
