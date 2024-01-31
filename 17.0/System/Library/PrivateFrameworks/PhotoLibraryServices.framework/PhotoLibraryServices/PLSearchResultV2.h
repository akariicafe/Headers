@class NSArray;

@interface PLSearchResultV2 : NSObject

@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSArray *collectionUUIDs;
@property (readonly, nonatomic) NSArray *suggestions;
@property (retain, nonatomic) NSArray *allFruitfulScopedQueryMatchedGroups;
@property (retain, nonatomic) NSArray *allQueryMatchedGroups;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAssetUUIDs:(id)a0 collectionUUIDs:(id)a1 suggestions:(id)a2;
- (void)mergeWithSearchResult:(id)a0;

@end
