@class NSUUID, HFCameraItemProvider, HFTargetControlItemProvider, HFGenericAccessoryItemProvider, HFServiceItemProvider, HFMediaAccessoryItemProvider, HFAccessoryItemProvider, HFProgrammableSwitchItemProvider;

@interface HUQuickControlPresentationItemManager : HFItemManager

@property (retain, nonatomic) HFAccessoryItemProvider *accessoryItemProvider;
@property (retain, nonatomic) HFGenericAccessoryItemProvider *genericItemProvider;
@property (retain, nonatomic) HFProgrammableSwitchItemProvider *programmableSwitchItemProvider;
@property (retain, nonatomic) HFTargetControlItemProvider *targetControlItemProvider;
@property (retain, nonatomic) HFMediaAccessoryItemProvider *mediaAccessoryItemProvider;
@property (retain, nonatomic) HFServiceItemProvider *serviceItemProvider;
@property (retain, nonatomic) HFCameraItemProvider *cameraItemProvider;
@property (readonly, nonatomic) NSUUID *homeKitObjectUUID;
@property (readonly, nonatomic) unsigned long long presentationItemType;

- (void).cxx_destruct;
- (id)initWithHomeKitObjectUUID:(id)a0 type:(unsigned long long)a1;
- (id)_buildItemProvidersForHome:(id)a0;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)a0;
- (BOOL)_shouldDisableOptionalDataDuringFastInitialUpdate;

@end
