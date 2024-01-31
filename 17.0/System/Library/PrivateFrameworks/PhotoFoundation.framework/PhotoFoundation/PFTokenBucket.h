@class NSDecimalNumber, NSString, PFStateCaptureHandler, NSObject;
@protocol OS_os_log, PFTimeService;

@interface PFTokenBucket : NSObject <PFStateCaptureProvider> {
    NSString *_name;
    NSDecimalNumber *_capacity;
    NSDecimalNumber *_refillRatePerMsec;
    NSObject<OS_os_log> *_log;
    id<PFTimeService> _timeService;
    PFStateCaptureHandler *_stateHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSDecimalNumber *_lock_availableTokens;
    unsigned long long _lock_lastRefillMsecs;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stateCaptureDictionary;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 capacity:(long long)a1 refillPeriod:(long long)a2;
- (id)initWithName:(id)a0 capacity:(long long)a1 refillRate:(long long)a2;
- (BOOL)removeToken;
- (id)initWithName:(id)a0 capacity:(long long)a1 decimalRefillRatePerMsec:(id)a2 timeService:(id)a3;
- (id)initWithName:(id)a0 capacity:(long long)a1 refillPeriod:(long long)a2 timeService:(id)a3;
- (id)initWithName:(id)a0 capacity:(long long)a1 refillRate:(long long)a2 timeService:(id)a3;

@end
