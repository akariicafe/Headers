@class NSString;

@interface RTPeopleDensityStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)clearWithHandler:(id /* block */)a0;
- (void)_fetchPeopleDensityFromDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)_purgePeopleDensityPredating:(id)a0 handler:(id /* block */)a1;
- (void)_storePeopleDensity:(id)a0 handler:(id /* block */)a1;
- (void)fetchPeopleDensityFromDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)purgePeopleDensityPredating:(id)a0 handler:(id /* block */)a1;
- (void)storePeopleDensity:(id)a0 handler:(id /* block */)a1;

@end
