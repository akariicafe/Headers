@interface SiriAnalyticsMetastore : NSObject {
    void /* unknown type, empty encoding */ storageURL;
    void /* unknown type, empty encoding */ db;
    void /* unknown type, empty encoding */ bootstrapped;
    void /* unknown type, empty encoding */ schemas;
}

- (void)checkpoint;
- (id)init;
- (void)createClock:(id)a0 rootClockIdentifier:(id)a1 bootSessionUUID:(id)a2 startedOn:(unsigned long long)a3;
- (void)dealloc;
- (void)prune;
- (void)pulseClock:(id)a0 lastEventOn:(unsigned long long)a1;
- (id)createTagWithShim:(id)a0 onClock:(id)a1;
- (void)bootstrap;
- (void).cxx_destruct;
- (id)sensitiveConditionsWithBootSessionUUIDs:(id)a0;
- (void)endClock:(id)a0 endedOn:(unsigned long long)a1 endedReason:(unsigned long long)a2;
- (void)cleanupAbandonedClocksWithActiveClockIdentifier:(id)a0;

@end
