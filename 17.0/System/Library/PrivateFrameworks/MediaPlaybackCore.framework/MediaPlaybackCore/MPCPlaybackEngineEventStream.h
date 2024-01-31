@class NSHashTable, NSString, NSDate, MSVSQLDatabaseTransaction, MPCPlaybackEngineEvent, NSCountedSet, NSMutableArray, NSObject, MSVSQLDatabase;
@protocol MPCPlabackEngineEventStreamTestingDelegate, OS_dispatch_queue;

@interface MPCPlaybackEngineEventStream : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _deferralAssertionsLock;
    int _deferralDebugToken;
    BOOL _ignorePerformanceDeferralAssertions;
    BOOL _invalidated;
    NSMutableArray *_subscriptions;
    NSHashTable *_deferralAssertions;
    NSMutableArray *_cachedEvents;
    NSCountedSet *_cacheMisses;
    NSCountedSet *_cacheHits;
    MSVSQLDatabase *_database;
    MSVSQLDatabaseTransaction *_activeTransaction;
    NSObject<OS_dispatch_queue> *_queue;
    long long _scheduledFlushes;
    NSDate *_nextScheduledFlush;
}

@property (weak, nonatomic) id<MPCPlabackEngineEventStreamTestingDelegate> testingDelegate;
@property (readonly, nonatomic) MPCPlaybackEngineEvent *lastEvent;
@property (readonly, nonatomic) NSString *engineID;

- (void)addConsumer:(id)a0;
- (void)dealloc;
- (void)resetConsumerEventDeliveryToTimestamp:(unsigned long long)a0;
- (void)invalidate;
- (id)lastEventsWithCount:(long long)a0;
- (id)eventDeliveryDeferralAssertionOfType:(long long)a0 forReason:(id)a1 withTimeout:(double)a2;
- (void)flushEventsWithConsumer:(id)a0 fromTimestamp:(unsigned long long)a1 untilTimestamp:(unsigned long long)a2;
- (void)scheduleInvalidation;
- (void)emitEventType:(id)a0 payload:(id)a1 atTime:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; double x4; })a2;
- (void)flushEvents;
- (id)initWithDatabaseCreationBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)eventDeliveryDeferralAssertionOfType:(long long)a0 forReason:(id)a1;
- (id)debugDescription;
- (void)setMaximumEventDeliveryTimestamp:(unsigned long long)a0;
- (void)emitEventType:(id)a0 payload:(id)a1;
- (id)initWithParameters:(id)a0;
- (void)removeConsumer:(id)a0;

@end
