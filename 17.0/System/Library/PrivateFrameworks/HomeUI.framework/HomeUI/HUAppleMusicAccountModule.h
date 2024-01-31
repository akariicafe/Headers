@class HUAppleMusicAccountItemProvider, HFStaticItemProvider, NSString, HUAppleMusicItem;
@protocol HFMediaProfileContainer;

@interface HUAppleMusicAccountModule : HFItemModule <HFAppleMusicAccountObserver, HFAccessoryObserver>

@property (readonly, nonatomic) HFStaticItemProvider *appleMusicAccountActionItemProvider;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, nonatomic) HUAppleMusicAccountItemProvider *appleMusicAccountItemProvider;
@property (readonly, nonatomic) HUAppleMusicItem *loggedInUsernameItem;
@property (readonly, nonatomic) HUAppleMusicItem *logoutItem;
@property (readonly, nonatomic) HUAppleMusicItem *loginItem;
@property (readonly, nonatomic) unsigned long long numberOfKnownAccounts;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ stateChangeObserver;
@property (readonly, nonatomic) NSString *explicitAccountSignedInMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)accessoryDidUpdatePreferredMediaUser:(id)a0;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)dispatcher:(id)a0 appleMusicAccountsDidUpdate:(id)a1;
- (id)initWithMediaProfileContainer:(id)a0 itemUpdater:(id)a1;
- (id)signInMessage:(BOOL)a0;

@end
