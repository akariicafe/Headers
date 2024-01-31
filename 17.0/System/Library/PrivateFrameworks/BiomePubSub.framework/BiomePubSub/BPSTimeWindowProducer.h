@class NSString, BPSSubscriptionStatus, NSDateInterval;

@interface BPSTimeWindowProducer : BPSWindow {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BPSSubscriptionStatus *_status;
    NSString *_identifier;
    BOOL _downstreamRequested;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) id accumulator;
@property (readonly, nonatomic) id /* block */ closure;

- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)requestDemand:(long long)a0;
- (id)identifier;
- (long long)receiveInput:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (void)cancel;
- (id)initWithDateInterval:(id)a0 aggregator:(id)a1 identifier:(id)a2;

@end
