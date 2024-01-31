@interface HomeKitEvents.QueryMetricsObserver : NSObject <HMMLogEventObserver> {
    void /* unknown type, empty encoding */ logSubmitter;
    void /* unknown type, empty encoding */ logEventDispatcher;
    void /* unknown type, empty encoding */ pendingQueryLogEvents;
}

- (id)init;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;

@end
