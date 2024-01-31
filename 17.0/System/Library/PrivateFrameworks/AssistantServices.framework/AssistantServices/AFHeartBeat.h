@class NSString, NSObject, NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFHeartBeat : NSObject <AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_heartBeatTimer;
    NSObject<OS_dispatch_source> *_expirationTimer;
    id /* block */ _heartBeatHandler;
    id /* block */ _invalidationHandler;
    _Atomic unsigned long long _numberOfHeartBeats;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSDate *effectiveDate;
@property (readonly, nonatomic) double expirationDuration;
@property (readonly, nonatomic) double heartBeatInterval;
@property (readonly, nonatomic) unsigned long long numberOfHeartBeats;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_invalidate;
- (void)invalidate;
- (void)_fire;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 queue:(id)a1 effectiveDate:(id)a2 expirationDuration:(double)a3 heartBeatInterval:(double)a4 heartBeatHandler:(id /* block */)a5 invalidationHandler:(id /* block */)a6;

@end
