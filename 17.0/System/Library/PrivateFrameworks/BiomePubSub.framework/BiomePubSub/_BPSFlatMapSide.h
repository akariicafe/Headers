@class NSString, _BPSFlatMapOuter;

@interface _BPSFlatMapSide : NSObject <BPSSubscriber>

@property (nonatomic) long long index;
@property (retain, nonatomic) _BPSFlatMapOuter *outer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (long long)receiveInput:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithIndex:(long long)a0 outer:(id)a1;

@end
