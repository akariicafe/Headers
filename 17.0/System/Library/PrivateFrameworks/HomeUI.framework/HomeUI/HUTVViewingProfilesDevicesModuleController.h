@class NSString, HUTVViewingProfilesDevicesItemModule;

@interface HUTVViewingProfilesDevicesModuleController : HUItemModuleController <HUSwitchCellDelegate>

@property (readonly, nonatomic) HUTVViewingProfilesDevicesItemModule *module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModule:(id)a0;
- (void)_toggleShowTVViewingProfileForItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (id)initWithModule:(id)a0 host:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;

@end
