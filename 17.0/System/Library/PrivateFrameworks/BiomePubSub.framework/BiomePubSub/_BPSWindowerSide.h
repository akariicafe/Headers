@class NSString, _BPSWindowerInner;
@protocol NSCopying;

@interface _BPSWindowerSide : BPSSubscription <BPSSubscriber>

@property (readonly, nonatomic) _BPSWindowerInner *windowerInner;
@property (readonly, nonatomic) id<NSCopying> key;
@property (retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)requestDemand:(long long)a0;
- (long long)receiveInput:(id)a0;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithKey:(id)a0 identifier:(id)a1 windowerInner:(id)a2;

@end
