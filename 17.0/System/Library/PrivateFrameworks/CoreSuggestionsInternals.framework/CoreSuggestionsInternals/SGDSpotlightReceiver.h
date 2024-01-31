@class NSString, SGCoalescingDropBox, SGDSuggestManager;
@protocol SpotlightReceiver;

@interface SGDSpotlightReceiver : NSObject <SpotlightReceiver> {
    SGDSuggestManager *_manager;
    SGCoalescingDropBox *_deleteInteractionBundleIdDropbox;
    SGCoalescingDropBox *_deleteInteractionIdDropbox;
    SGCoalescingDropBox *_deleteInteractionGroupIdDropbox;
    id<SpotlightReceiver> _duReceiver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)deleteAllUserActivities:(id)a0;
- (void)deleteAllInteractionsWithBundleID:(id)a0 protectionClass:(id)a1;
- (id)supportedContentTypes;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1;
- (void)deleteUserActivitiesWithPersistentIdentifiers:(id)a0 bundleID:(id)a1;
- (void)purgeSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (id)initWithManager:(id)a0;
- (void).cxx_destruct;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteAllSearchableItemsWithBundleID:(id)a0;
- (void)deleteInteractionsWithIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)addInteractions:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)deleteInteractionsWithGroupIdentifiers:(id)a0 bundleID:(id)a1 protectionClass:(id)a2;
- (void)_addSearchableItem:(id)a0 bundleID:(id)a1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;
- (void)addUserAction:(id)a0 withItem:(id)a1;

@end
