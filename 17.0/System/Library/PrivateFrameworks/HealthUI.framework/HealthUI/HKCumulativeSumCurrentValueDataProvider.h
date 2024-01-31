@interface HKCumulativeSumCurrentValueDataProvider : HKValueDataProvider

- (id)currentValue;
- (void)_sumFromDate:(id)a0 toDate:(id)a1 completion:(id /* block */)a2;
- (void)_dataProviderValueFromMostRecentSample:(id)a0 completion:(id /* block */)a1;
- (id)_mostRecentValueQueryWithCompletion:(id /* block */)a0;
- (id)fetchOperationWithCompletion:(id /* block */)a0;

@end
