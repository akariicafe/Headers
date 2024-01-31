@class NSString;

@interface RTVehicleStore : RTStore <RTEnumerableStore, RTPurgable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)periodicPurgePolicy;

- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)fetchVehiclesWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithPersistenceManager:(id)a0;
- (void)purgeVehiclesPredating:(id)a0 handler:(id /* block */)a1;
- (void)_fetchVehiclesWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeVehiclesPredating:(id)a0 handler:(id /* block */)a1;
- (void)_storeVehicle:(id)a0 handler:(id /* block */)a1;
- (void)storeVehicle:(id)a0 handler:(id /* block */)a1;

@end
