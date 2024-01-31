@class NSOperationQueue, NSPointerArray;
@protocol HMMRTCReportingFactory;

@interface HMMQueuingRTCBackendSessionManager : NSObject <_HMMLogBackendSubmitterDelegate, HMMRTCBackendSessionManager> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSPointerArray *_activeSessions;
    double _nextStaleCheckTime;
    BOOL __isTimeValid;
}

@property (readonly, nonatomic) id<HMMRTCReportingFactory> rtcFactory;
@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) NSOperationQueue *queue;

+ (id)sharedSessionManager;
+ (id)logCategory;

- (void)addBarrierBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_isTimeValid;
- (void)checkForStaleSessions;
- (id)initWithRTCFactory:(id)a0 timeSourceBlock:(id /* block */)a1;
- (id)logBackendSessionWithServiceName:(id)a0 sessionUUID:(id)a1 isRealtime:(BOOL)a2;
- (void)sendMetaEventWithName:(id)a0 forServiceName:(id)a1;
- (void)submitMessages:(id)a0 serviceName:(id)a1 sessionUUID:(id)a2 isRealtime:(BOOL)a3;

@end
