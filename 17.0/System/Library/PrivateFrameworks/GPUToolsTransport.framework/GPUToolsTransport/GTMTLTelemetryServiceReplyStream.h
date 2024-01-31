@protocol GTMTLTelemetryServiceObserver;

@interface GTMTLTelemetryServiceReplyStream : GTXPCDispatcher <GTMTLTelemetryServiceObserverXPCDispatcher> {
    id<GTMTLTelemetryServiceObserver> _observer;
}

- (id)initWithObserver:(id)a0;
- (void).cxx_destruct;
- (void)notifyStatistics_:(id)a0 replyConnection:(id)a1;

@end
