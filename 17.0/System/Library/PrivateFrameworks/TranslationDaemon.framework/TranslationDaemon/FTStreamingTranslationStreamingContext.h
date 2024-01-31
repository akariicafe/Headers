@protocol OspreyClientStreamingContext;

@interface FTStreamingTranslationStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;
- (void)sendStreamingTranslationStreamingRequest:(id)a0;

@end
