@class NSMutableArray;
@protocol BPSPublisher;

@interface BPSZip : BPSPublisher

@property (nonatomic) BOOL nextIsB;
@property (retain, nonatomic) NSMutableArray *eventsA;
@property (retain, nonatomic) NSMutableArray *eventsB;
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
- (id)_tryConstructResultTuple;

@end
