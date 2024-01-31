@class HFItem, HMUser, NSArray, HMHome, HUAccessorySettingsItemModule, HFUserItem, NSString, HULocationDeviceManager, HUMediaServiceSettingsItemModule;

@interface HUEditUserItemManager : HFItemManager <HUUserItemManager>

@property (retain, nonatomic) HMHome *homeForUser;
@property (retain, nonatomic) HFItem *localAccessItem;
@property (retain, nonatomic) HFItem *remoteAccessItem;
@property (retain, nonatomic) HFItem *allowEditingItem;
@property (retain, nonatomic) HFItem *camerasItem;
@property (retain, nonatomic) HFItem *locksItem;
@property (retain, nonatomic) HFItem *removeItem;
@property (retain, nonatomic) HFItem *pendingAccessoriesItem;
@property (retain, nonatomic) HFUserItem *sourceItem;
@property (retain, nonatomic) HFItem *personalRequestsItem;
@property (retain, nonatomic) HFItem *tvViewingProfilesItem;
@property (retain, nonatomic) HFItem *updateListeningHistoryItem;
@property (retain, nonatomic) HUMediaServiceSettingsItemModule *mediaServiceItemModule;
@property (retain, nonatomic) NSArray *sectionOrderArrayWhenViewingSelf;
@property (retain, nonatomic) NSArray *sectionOrderArrayWhenViewingOther;
@property (retain, nonatomic) HULocationDeviceManager *locationDeviceManager;
@property (readonly, nonatomic) HMUser *userBeingEdited;
@property (readonly, nonatomic) HFItem *personalRequestsFooterItem;
@property (retain, nonatomic) HUAccessorySettingsItemModule *userSettingsItemModule;
@property (retain, nonatomic) NSArray *supportedMULanguageCodes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHome:(id)a0 userItem:(id)a1 delegate:(id)a2;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (BOOL)_canModifyUserBeingEditedPermissions;
- (BOOL)_hasPendingAccessories;
- (BOOL)_hasPersonalRequestsDevice;
- (BOOL)_hasResidentDevice;
- (BOOL)_hasTVViewingProfilesDevice;
- (id)_homeFuture;
- (BOOL)_isEditingAllowedForUser:(id)a0;
- (BOOL)_isPersonalRequestsEnabledForUser;
- (BOOL)_isRemoteAccessAllowedForUser:(id)a0;
- (BOOL)_isTVViewingProfilesEnabledForUser;
- (BOOL)_isUserOwner:(id)a0;
- (BOOL)_isVoiceIDEnabled:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (void)_registerForExternalUpdates;
- (BOOL)_shouldShowBoltUI;
- (void)_unregisterForExternalUpdates;
- (void)_updateSiriSectionFooterForSection:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (BOOL)isUserBeingEditedTheDeviceUser;
- (id)reuseIdentifierForFooterViewInSection:(unsigned long long)a0;

@end
