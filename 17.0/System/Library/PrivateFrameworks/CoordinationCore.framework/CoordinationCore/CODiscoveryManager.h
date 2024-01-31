@class NSDictionary, NSObject;
@protocol OS_dispatch_source, CODiscoveryManagerDelegate;

@interface CODiscoveryManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSDictionary *envelopes;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, getter=isTimerEnabled) BOOL timerEnabled;
@property (readonly, weak, nonatomic) id<CODiscoveryManagerDelegate> delegate;
@property (readonly, nonatomic) double discoveryDelay;
@property (readonly, nonatomic) unsigned long long count;

+ (id)managerWithDiscoveryDelay:(double)a0 delegate:(id)a1;

- (void)_timerFired;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_withLock:(id /* block */)a0;
- (void)clearRecords;
- (void)_configureTimer;
- (void)_disableTimer_unsafe;
- (void)_enableTimer_unsafe;
- (id)_initWithDiscoveryDelay:(double)a0 delegate:(id)a1;
- (void)_invokeDelegate:(id)a0;
- (id)_triggerDiscovery_unsafe;
- (BOOL)addDiscoveryRecord:(id)a0;

@end
