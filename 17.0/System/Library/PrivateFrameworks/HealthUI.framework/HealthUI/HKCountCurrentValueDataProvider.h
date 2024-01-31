@interface HKCountCurrentValueDataProvider : HKValueDataProvider

@property (readonly, nonatomic) long long countStyle;

- (id)currentValue;
- (id)_countAllSamplesQueryWithCompletion:(id /* block */)a0;
- (void)_countFromDate:(id)a0 toDate:(id)a1 completion:(id /* block */)a2;
- (id)_dataProviderValueForCount:(id)a0 sampleDate:(id)a1;
- (void)_dataProviderValueFromMostRecentSample:(id)a0 completion:(id /* block */)a1;
- (id)_mostRecentValueQueryWithCompletion:(id /* block */)a0;
- (id)fetchOperationWithCompletion:(id /* block */)a0;
- (id)initWithHealthStore:(id)a0 updateController:(id)a1 dateCache:(id)a2 displayType:(id)a3 countStyle:(long long)a4;

@end
