@protocol OspreyClientStreamingContext;

@interface FTBatchTranslationStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;
- (void)sendBatchTranslationStreamingRequest:(id)a0;

@end
