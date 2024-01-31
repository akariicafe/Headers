@protocol DSMotionProviderDelegate;

@interface DSMotionProvider : DSProvider

@property (weak, nonatomic) id<DSMotionProviderDelegate> delegate;

- (void)requestedMotionDataWithOption:(id)a0;
- (void)stoppedProvider;
- (void)failedToStartProviderWithOptions:(id)a0 error:(id)a1;
- (void)subscribedToMotionDataWithOptions:(id)a0;
- (void)unsubscribed;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)startMotionDataProviderWithOptions:(id)a0;
- (void)startedProviderWithOptions:(id)a0;
- (void)subscriptionExpired;
- (void).cxx_destruct;
- (void)stopMotionDataProvider;
- (void)sendMotionData:(id)a0;

@end
