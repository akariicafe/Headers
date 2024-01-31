@class HFUserItemProvider, NAFuture, HMAccessory, HFPinCodeManager, HFStaticItem, HMHome;

@interface HUUsersAndGuestsPinCodeItemManager : HFItemManager

@property (retain, nonatomic) HFPinCodeManager *pinCodeManager;
@property (readonly, nonatomic) HMHome *overrideHome;
@property (retain, nonatomic) HMAccessory *accessory;
@property (retain, nonatomic) HFUserItemProvider *userItemProvider;
@property (retain, nonatomic) HFStaticItem *restoreHomeKeyAccessItem;
@property (retain, nonatomic) NAFuture *restoreFuture;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_homeFuture;
- (void)_registerForExternalUpdates;
- (void)_unregisterForExternalUpdates;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithPinCodeManager:(id)a0 delegate:(id)a1 home:(id)a2 forAccessory:(id)a3;

@end
