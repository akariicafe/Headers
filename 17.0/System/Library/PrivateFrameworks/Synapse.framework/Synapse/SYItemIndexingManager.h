@interface SYItemIndexingManager : NSObject

+ (void)indexedContentItemsDidChange;
+ (id)_coreSpotlightIndexBundleID;
+ (id)_customKeyForKey:(id)a0;
+ (void)_fetchIndexedActivitiesWithActivityType:(id)a0 completion:(id /* block */)a1;
+ (void)_fetchIndexedItemsLinkedToUserActivity:(id)a0 extraFetchAttributes:(id)a1 completion:(id /* block */)a2;
+ (id)_postFilteredItems:(id)a0 matchingUserActivityInfo:(id)a1;
+ (id)_queryStringForMatchingUserActivityInfo:(id)a0;
+ (void)fetchActivitiesWithActivityType:(id)a0 completion:(id /* block */)a1;
+ (void)fetchIdentifiersLinkedToUserActivity:(id)a0 completion:(id /* block */)a1;
+ (void)fetchLinkContextsDataForUserActivity:(id)a0 completion:(id /* block */)a1;
+ (id)searchableItemLinkingContentItem:(id)a0 toContainerIdentifier:(id)a1 relatedIdentifier:(id)a2 domainIdentifier:(id)a3;
+ (id)searchableItemLinkingContentItem:(id)a0 toContainerIdentifier:(id)a1 uniqueIdentifier:(id)a2 relatedIdentifier:(id)a3 domainIdentifier:(id)a4;
+ (void)setUseLocalSearchIndex;

@end
