@class NSString, NSMutableDictionary, NSDate;

@interface HMDXPCMessageCountTracker : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_acceptedRequests;
    NSMutableDictionary *_erroredRequests;
    NSMutableDictionary *_sentNotifications;
}

@property (retain, nonatomic) NSDate *lastResetDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)xpcCounterTracker;

- (id)init;
- (id)dumpState;
- (id)__init;
- (void).cxx_destruct;
- (void)_resetCounters;
- (id)countersOfType:(long long)a0;
- (id)_countersOfType:(long long)a0;
- (void)_incrementCounterOfType:(long long)a0 identifier:(id)a1;
- (void)incrementCounterOfType:(long long)a0 identifier:(id)a1;
- (id)sampleCountersAndReset:(BOOL)a0;
- (void)submitCounters;

@end
