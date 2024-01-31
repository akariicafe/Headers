@class NSDictionary;

@interface FedStatsDataCohort : NSObject

@property (readonly, nonatomic) NSDictionary *namespaceMap;

+ (id)sharedInstance;
+ (BOOL)checkCohortField:(id)a0 forNamespaceID:(id)a1;
+ (id)keysForCohorts:(id)a0 namespaceID:(id)a1 parameters:(id)a2 possibleError:(id *)a3;

- (id)init;
- (void).cxx_destruct;

@end
