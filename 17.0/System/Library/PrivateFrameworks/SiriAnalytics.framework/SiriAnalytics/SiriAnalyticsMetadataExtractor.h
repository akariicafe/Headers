@interface SiriAnalyticsMetadataExtractor : NSObject <SiriAnalyticsDebounceDelegate> {
    void /* unknown type, empty encoding */ metastore;
    void /* unknown type, empty encoding */ runtimeQueue;
    void /* unknown type, empty encoding */ connectedComponentsByClock;
    void /* unknown type, empty encoding */ componentIdsByClock;
    void /* unknown type, empty encoding */ dirtied;
    void /* unknown type, empty encoding */ autoCommit;
    void /* unknown type, empty encoding */ $__lazy_storage_$_flushPulse;
}

- (id)init;
- (void).cxx_destruct;
- (void)debounceFired:(id)a0 maximumReached:(BOOL)a1;
- (id)initWithMetastore:(id)a0 runtimeQueue:(id)a1 autoCommit:(BOOL)a2;
- (void)pruneWithClockIdentifier:(id)a0;

@end
