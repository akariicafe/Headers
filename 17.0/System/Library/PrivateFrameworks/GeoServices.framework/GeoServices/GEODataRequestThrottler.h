@class NSString, NSDictionary, NSMutableDictionary, geo_isolater, NSObject;
@protocol OS_dispatch_source;

@interface GEODataRequestThrottler : NSObject <GEOConfigChangeListenerDelegate> {
    geo_isolater *_isolation;
    NSDictionary *_defaultThrottlePolicy;
    NSDictionary *_globalThrottlePolicy;
    BOOL _throttlePoliciesCached;
    NSMutableDictionary *_throttlers;
    NSObject<OS_dispatch_source> *_updateStateTimer;
    int _defaultChangedNotification;
    id _networkChangedNotification;
    unsigned char _throttleEventLogLevel;
}

@property (class, readonly) GEODataRequestThrottler *sharedThrottler;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (id)init;
- (void)_withThrottlersForKey:(struct GEOThrottleKey { unsigned int x0; })a0 auditToken:(id)a1 do:(id /* block */)a2;
- (void)reset;
- (void)dealloc;
- (id)_init;
- (void)_reset;
- (id)throttlerForKeyPath:(id)a0;
- (void)_updateSavedState:(id)a0;
- (void)getInfoForRequest:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 client:(id)a1 timeUntilNextReset:(double *)a2 availableRequestCount:(unsigned int *)a3;
- (void)_pruneThrottlers;
- (void)pruneThrottlers;
- (void).cxx_destruct;
- (BOOL)allowRequest:(struct { int x0; union { int x0; int x1; int x2; } x1; })a0 forClient:(id)a1 throttlerToken:(id *)a2 error:(id *)a3;

@end
