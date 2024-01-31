@interface HMCoreAnalyticsMetricEventDispatcher : HMFObject {
    id /* block */ _sendEventHandler;
}

- (id)init;
- (void)sendEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithSendEventHandler:(id /* block */)a0;

@end
