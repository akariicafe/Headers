@class FCCKTestFeedQueryEndpoint, NSSet, FCCKTestMultiFetchQueryEndpoint, NSMutableSet, FCCKTestOrderFeedQueryEndpoint, NSMutableArray;

@interface FCCKTestContentDatabase : FCCKContentDatabase

@property (retain, nonatomic) NSMutableArray *records;
@property (retain, nonatomic) NSMutableSet *droppedFeeds;
@property (retain, nonatomic) FCCKTestFeedQueryEndpoint *feedQueryEndpoint;
@property (retain, nonatomic) FCCKTestOrderFeedQueryEndpoint *orderFeedQueryEndpoint;
@property (retain, nonatomic) FCCKTestMultiFetchQueryEndpoint *multiFetchQueryEndpoint;
@property (copy, nonatomic) NSSet *fetchedKeys;
@property (nonatomic) BOOL simulateNetworkError;

+ (id)testingDatabase;

- (void)addOperation:(id)a0;
- (void)updateArticleWithID:(id)a0 properties:(id)a1;
- (id)insertTestIssueListReferencingIssueIDs:(id)a0;
- (id)records:(id)a0 withDesiredKeys:(id)a1;
- (id)insertTestArticleWithProperties:(id)a0;
- (void)insertRecord:(id)a0;
- (void)insertArticleID:(id)a0 atTopOfFeedID:(id)a1;
- (void)insertArticleID:(id)a0 inFeedID:(id)a1 withOrder:(unsigned long long)a2;
- (void)updateArticleWithID:(id)a0 modDate:(id)a1 properties:(id)a2;
- (id)insertTestArticleListReferencingArticleIDs:(id)a0;
- (BOOL)shouldUseCloudd;
- (unsigned long long)orderForArticleID:(id)a0 feedID:(id)a1;
- (id)insertTestForYouConfigWithProperties:(id)a0;
- (void)simulateDroppedFeedForFeedID:(id)a0;
- (void)deleteFeedID:(id)a0;
- (void)insertArticleID:(id)a0 atBottomOfFeedID:(id)a1;
- (void)populateWithBasicTestFeeds;
- (void)updateTagWithID:(id)a0 properties:(id)a1;
- (id)addArticlesToTopOfFeed:(id)a0 count:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)insertTestIssueWithID:(id)a0 properties:(id)a1;
- (void)updateArticleID:(id)a0 inFeedID:(id)a1 withProperties:(id)a2;
- (id)insertTestIssueWithProperties:(id)a0;
- (void)deleteArticleWithID:(id)a0;
- (id)initWithContainerIdentifier:(id)a0 productionEnvironment:(BOOL)a1 networkBehaviorMonitor:(id)a2 configurationManager:(id)a3;
- (void)insertArticleID:(id)a0 inFeedID:(id)a1 withOrder:(unsigned long long)a2 subOrder:(unsigned long long)a3;
- (id)insertTestTagWithType:(id)a0 feedID:(id)a1;
- (id)insertTestTagWithType:(id)a0 feedID:(id)a1 properties:(id)a2;
- (void)insertTestTagWithID:(id)a0 type:(id)a1 properties:(id)a2;
- (id)insertTestTagWithType:(id)a0 properties:(id)a1;
- (id)insertTestArticle;
- (void)insertTestArticleWithID:(id)a0 properties:(id)a1;

@end
