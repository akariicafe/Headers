@class NSString;

@interface RTTripSegmentStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)fetchTripSegmentsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithPersistenceManager:(id)a0;
- (void)deleteTripSegmentWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_deleteTripSegmentWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripSegmentsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_fetchTripSegmentsWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_purgeTripSegmentsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)_purgeTripSegmentsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_storeTripSegment:(id)a0 handler:(id /* block */)a1;
- (void)fetchTripSegmentsWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)purgeTripSegmentsOnDateInterval:(id)a0 handler:(id /* block */)a1;
- (void)purgeTripSegmentsPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeTripSegment:(id)a0 handler:(id /* block */)a1;

@end
