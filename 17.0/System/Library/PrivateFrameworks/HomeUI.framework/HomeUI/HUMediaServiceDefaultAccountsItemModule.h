@class NSSet, NSString, HUMediaServiceItemProvider, HMHome;

@interface HUMediaServiceDefaultAccountsItemModule : HFItemModule <HUMediaServiceItemProviderDelegate>

@property (readonly, nonatomic) NSSet *itemProviders;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) HUMediaServiceItemProvider *mediaServiceItemProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)containsItem:(id)a0;
- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (void)mediaServiceItemProviderDidUpdateServices:(id)a0;
- (void)registerForExternalUpdates;
- (void)unregisterForExternalUpdates;
- (id)updateDefaultAccount:(id)a0;

@end
