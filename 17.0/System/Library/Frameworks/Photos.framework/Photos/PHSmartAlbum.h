@interface PHSmartAlbum : PHAssetCollection

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)_collectionSubtypeExpressionForFetchRequests;
+ (id)fetchPredicateFromComparisonPredicate:(id)a0 options:(id)a1;
+ (id)albumKindFromSmartAlbumSubtype:(long long)a0;

- (BOOL)collectionHasFixedOrder;

@end
