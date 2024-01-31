@class NSString;

@interface DUFileUpdateSpotlightReceiver : NSObject <SpotlightReceiver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportedContentTypes;
- (void)addOrUpdateSearchableItems:(id)a0 bundleID:(id)a1;
- (id)supportedBundleIDs;
- (void)purgeSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteSearchableItemsWithIdentifiers:(id)a0 bundleID:(id)a1;
- (void)deleteAllSearchableItemsWithBundleID:(id)a0;
- (void)deleteSearchableItemsSinceDate:(id)a0 bundleID:(id)a1;
- (void)deleteSearchableItemsWithDomainIdentifiers:(id)a0 bundleID:(id)a1;

@end
