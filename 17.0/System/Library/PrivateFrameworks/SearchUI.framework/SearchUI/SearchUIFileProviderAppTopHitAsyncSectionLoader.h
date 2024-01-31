@class CSSearchQuery, NSMutableArray, NSRecursiveLock;

@interface SearchUIFileProviderAppTopHitAsyncSectionLoader : SearchUICoreSpotlightAppTopHitAsyncSectionLoader

@property (retain, nonatomic) NSMutableArray *foundItems;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) CSSearchQuery *query;

+ (id)rankingQueriesForFileproviderQuery;
+ (BOOL)supportsSectionModel:(id)a0;

- (void).cxx_destruct;
- (id)buildCardSectionsForFoundItems:(id)a0;
- (id)buildSearchQueryForBundleIdentifier:(id)a0;

@end
