@class HFUserItem, NSSet, NSArray, HMMediaContentProfileAccessControl, HFItemProvider, HMHome;

@interface HUTVViewingProfilesDevicesItemModule : HFItemModule

@property (readonly, nonatomic) NSSet *itemProviders;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HFUserItem *sourceItem;
@property (readonly, nonatomic) HMMediaContentProfileAccessControl *accessControl;
@property (retain, nonatomic) HFItemProvider *viewingProfileItemProvider;
@property (copy, nonatomic) NSArray *viewingProfilesDevices;

- (void).cxx_destruct;
- (id)_commitUpdateToAccessControl:(id)a0;
- (void)_createItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 userItem:(id)a1;
- (BOOL)isTVViewingProfileDevice:(id)a0;
- (void)turnOnTVViewingProfilesForAllDevices;

@end
