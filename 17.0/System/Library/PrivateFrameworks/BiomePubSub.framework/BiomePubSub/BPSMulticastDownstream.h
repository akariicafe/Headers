@class BPSMulticast, NSNumber;
@protocol BPSSubscriber;

@interface BPSMulticastDownstream : BMBookmarkablePublisher

@property (readonly, nonatomic) BPSMulticast *multicast;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) id<BPSSubscriber> subscriber;

- (id)startWithSubscriber:(id)a0;
- (BOOL)completed;
- (void)reset;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void).cxx_destruct;
- (id)initWithMulticast:(id)a0;

@end
