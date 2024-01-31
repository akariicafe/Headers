@class NSString;

@interface HUCameraRecordingOptionsModuleController : HUItemModuleController <HUSwitchCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModule:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (id)alertMessageForEventType:(unsigned long long)a0;
- (id)alertTitleForEventType:(unsigned long long)a0;
- (Class)cellClassForItem:(id)a0;
- (void)displayAlertForItem:(id)a0;
- (BOOL)hasNotificationSettingForItem:(id)a0;
- (BOOL)isItemHeader:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
