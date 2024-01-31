@class SHClusterSQLiteDataStore, SHClusterStatementRunner;

@interface SHClusterController : NSObject

@property (readonly, nonatomic) SHClusterStatementRunner *query;
@property (readonly, nonatomic) SHClusterSQLiteDataStore *dataStore;

+ (id)artistClusterDefaultLocationURL;
+ (id)databaseURLForName:(id)a0;
+ (id)trackClusterDefaultLocationURL;

- (id)initWithDataStore:(id)a0;
- (void).cxx_destruct;
- (id)affinityGroupsAtCohesionLevel:(long long)a0 forQuery:(id)a1 queryCollection:(id)a2 filteredBy:(id)a3;
- (void)affinityGroupsFromQueryCollection:(id)a0 filteredBySeedCollection:(id)a1 completionHandler:(id /* block */)a2;
- (id)filterQueryCollection:(id)a0 byItemsWithinCluster:(id)a1;
- (void)mediaItemsForPropertyCollection:(id)a0 completionHandler:(id /* block */)a1;
- (void)mediaItemsSimilarToValue:(id)a0 forKey:(id)a1 completionHandler:(id /* block */)a2;
- (void)resultsFromQueryBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;

@end
