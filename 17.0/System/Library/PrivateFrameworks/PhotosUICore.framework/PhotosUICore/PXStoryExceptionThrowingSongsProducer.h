@interface PXStoryExceptionThrowingSongsProducer : NSObject <PXStorySongsProducer>

@property (nonatomic) void /* unknown type, empty encoding */ logContext;

- (id)init;
- (id)requestSongsWithOptions:(unsigned long long)a0 resultHandler:(id /* block */)a1;

@end
