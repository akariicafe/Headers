@interface HKRemoteCardioFitnessDataSource : HKQuantityTypeDataSource

- (id)chartPointsFromQueryData:(id)a0 dataIsFromRemoteSource:(BOOL)a1;
- (id /* block */)generateSharableQueryDataForRequest:(id)a0 healthStore:(id)a1 completionHandler:(id /* block */)a2;
- (id /* block */)_cardioFitnessUserInfoCreationBlockWithAge:(long long)a0 biologicalSex:(long long)a1;
- (id /* block */)_userInfoBlockWithUnitController:(id)a0 displayType:(id)a1;
- (id)initWithUnitController:(id)a0 displayType:(id)a1 healthStore:(id)a2;

@end
