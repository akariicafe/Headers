@interface MNLPRRuleHelper : NSObject

- (id)workQueue;
- (void)_findResourceNamesForRegions:(id)a0 forceUpdate:(BOOL)a1 asyncCompletion:(id /* block */)a2;
- (void)_loadRules:(id)a0 asyncCompletion:(id /* block */)a1;
- (void)fetchRulesForWaypoints:(id)a0 forceUpdateManifest:(BOOL)a1 forceUpdateRules:(BOOL)a2 completionQueue:(id)a3 completion:(id /* block */)a4;
- (void)prefetchRulesForWaypoints:(id)a0;

@end
