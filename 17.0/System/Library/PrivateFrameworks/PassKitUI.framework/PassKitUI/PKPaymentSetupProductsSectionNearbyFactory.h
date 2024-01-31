@interface PKPaymentSetupProductsSectionNearbyFactory : NSObject

+ (id)_createNearbySectionFromCandidates:(id)a0;
+ (BOOL)_itemsContainRegionData:(id)a0;
+ (id)_polygonFromListItem:(id)a0;
+ (id)_regionalListItemsUsingContext:(id)a0 listItems:(id)a1;
+ (void)_sortContainedProducts:(id)a0;
+ (void)_sortExternalProducts:(id)a0 withMapping:(id)a1;
+ (id)_sortedItemsBasedUponProximityUsingContext:(id)a0 listItems:(id)a1;
+ (id)generateSectionWithDefaultSortingForItems:(id)a0 withContext:(id)a1;

@end
