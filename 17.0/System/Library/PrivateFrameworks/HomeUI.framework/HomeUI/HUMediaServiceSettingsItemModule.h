@class NSSet, NSString, HUMediaServiceItemProvider, HFStaticItem, HMHome;

@interface HUMediaServiceSettingsItemModule : HFItemModule <HUMediaServiceItemProviderDelegate>

@property (readonly, nonatomic) NSSet *itemProviders;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) HFStaticItem *defaultAccountsItem;
@property (retain, nonatomic) HUMediaServiceItemProvider *mediaServiceItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_createItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (void)mediaServiceItemProviderDidUpdateServices:(id)a0;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;

@end
