@class NSString;

@interface RTElevationStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequestFromStoredElevationOptions:(id)a0;

- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (id)initWithPersistenceManager:(id)a0;
- (void)_fetchStoredElevationsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredElevationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_removeElevations:(id)a0 handler:(id /* block */)a1;
- (void)_removeElevationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_removeInterimElevations:(id)a0 handler:(id /* block */)a1;
- (void)_storeElevations:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredElevationsWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredElevationsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)removeElevations:(id)a0 handler:(id /* block */)a1;
- (void)removeElevationsPredating:(id)a0 handler:(id /* block */)a1;
- (void)removeInterimElevations:(id)a0 handler:(id /* block */)a1;
- (void)storeElevations:(id)a0 handler:(id /* block */)a1;

@end
