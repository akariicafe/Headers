@class CSSearchQuery, NSMutableArray, NSRecursiveLock;

@interface SearchUICoreSpotlightAppTopHitAsyncSectionLoader : SearchUIAppTopHitAsyncSectionLoader

@property (retain, nonatomic) NSMutableArray *foundItems;
@property (retain, nonatomic) NSRecursiveLock *lock;
@property (retain, nonatomic) CSSearchQuery *query;

- (void).cxx_destruct;
- (id)buildCardSectionsForFoundItems:(id)a0;
- (id)responseForFoundItems:(id)a0 animated:(BOOL)a1;
- (id)buildSearchQueryForBundleIdentifier:(id)a0;
- (void)fetchCardSectionsWithCompletionHandler:(id /* block */)a0;
- (id)initWithSectionModel:(id)a0 result:(id)a1 queryId:(unsigned long long)a2;

@end
