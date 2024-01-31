@class NSString;

@interface RTVisitStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)fetchVisitsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)storeVisit:(id)a0 handler:(id /* block */)a1;
- (void)purgeVisitsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_fetchVisitsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_storeVisit:(id)a0 handler:(id /* block */)a1;
- (void)_purgeVisitsPredating:(id)a0 handler:(id /* block */)a1;

@end
