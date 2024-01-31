@class NSString;

@interface RTTripSegmentInertialDataStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (id)initWithPersistenceManager:(id)a0;
- (void)_fetchStoredTripSegmentInertialDataWithContext:(id)a0 handler:(id /* block */)a1;
- (void)_fetchStoredTripSegmentInertialDataWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_purgeTripSegmentInertialDataPredating:(id)a0 handler:(id /* block */)a1;
- (void)_storeTripSegmentInertialData:(id)a0 handler:(id /* block */)a1;
- (id)fetchRequestFromStoredTripSegmentInertialDataOptions:(id)a0;
- (void)fetchStoredTripSegmentInertialDataWithContext:(id)a0 handler:(id /* block */)a1;
- (void)fetchStoredTripSegmentInertialDataWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)purgeTripSegmentInertialDataPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeTripSegmentInertialData:(id)a0 handler:(id /* block */)a1;

@end
