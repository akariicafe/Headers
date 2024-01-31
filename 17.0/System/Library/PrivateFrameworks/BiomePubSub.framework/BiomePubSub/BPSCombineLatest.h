@protocol BPSPublisher;

@interface BPSCombineLatest : BPSPublisher

@property (retain, nonatomic) id latestA;
@property (retain, nonatomic) id latestB;
@property (nonatomic) BOOL nextIsB;
@property (readonly, nonatomic) id<BPSPublisher> a;
@property (readonly, nonatomic) id<BPSPublisher> b;

+ (id)new;

- (BOOL)completed;
- (id)init;
- (void)reset;
- (id)nextEvent;
- (id)upstreamPublishers;
- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithA:(id)a0 b:(id)a1;

@end
