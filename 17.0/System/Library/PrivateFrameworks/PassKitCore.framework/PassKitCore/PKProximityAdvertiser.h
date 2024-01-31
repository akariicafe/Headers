@class SFService, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PKProximityAdvertiser : NSObject {
    SFService *_nearbyInfoSharingService;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_advertiserQueue;
}

@property (readonly, nonatomic) BOOL isAdvertising;

- (void)endAdvertising;
- (id)init;
- (void)dealloc;
- (void)startAdvertisingForDuration:(double)a0 completion:(id /* block */)a1;
- (id /* block */)_createAdvertisingActivationBlockWithName:(id)a0 duration:(double)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)_queue_endAdvertising;

@end
