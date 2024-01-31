@class NSString;

@interface RTProximityEventStore : RTStore <RTEnumerableStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fetchRequestFromOptions:(id)a0 offset:(unsigned long long)a1 error:(id *)a2;
- (void)clearWithHandler:(id /* block */)a0;
- (void)_deleteProximityEventWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)_fetchProximityEventsFromDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)_fetchProximityEventsFromEventIDs:(id)a0 handler:(id /* block */)a1;
- (id)_getPredicateForEventIDs:(id)a0;
- (void)_purgeProximityEventsPredating:(id)a0 handler:(id /* block */)a1;
- (void)_storeProximityEvent:(id)a0 handler:(id /* block */)a1;
- (void)deleteProximityEventWithUUID:(id)a0 handler:(id /* block */)a1;
- (void)fetchProximityEventsFromDate:(id)a0 endDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchProximityEventsFromEventIDs:(id)a0 handler:(id /* block */)a1;
- (void)purgeProximityEventsPredating:(id)a0 handler:(id /* block */)a1;
- (void)storeProximityEvent:(id)a0 handler:(id /* block */)a1;

@end
