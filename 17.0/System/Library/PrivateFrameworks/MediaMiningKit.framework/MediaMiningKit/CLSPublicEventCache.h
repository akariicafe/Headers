@interface CLSPublicEventCache : CLSDBCache

- (id)init;
- (id)dataModelName;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0;
- (id)publicEventsForMuid:(unsigned long long)a0;
- (void)_updateManagedEvent:(id)a0 withEvent:(id)a1 inContext:(id)a2;
- (BOOL)hasTimeLocationTuple:(id)a0;
- (BOOL)insertBatchesOfPublicEventsByTimeLocationIdentifier:(id)a0 forTimeLocationTuples:(id)a1;
- (unsigned long long)numberOftimeLocationTuplesForTimeLocationTuple:(id)a0;
- (id)predicateForTimeLocationTuple:(id)a0;
- (id)publicEventFromManagedObject:(id)a0;
- (id)publicEventsForTimeLocationTuple:(id)a0;

@end
