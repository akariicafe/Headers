@protocol OspreyClientStreamingContext;

@interface FTPronGuessStreamingContext : NSObject {
    id<OspreyClientStreamingContext> _grpcContext;
}

- (void).cxx_destruct;
- (void)closeStream;
- (id)initWithGRPCStreamingCallContext:(id)a0;
- (void)sendPronGuessStreamingRequest:(id)a0;

@end
