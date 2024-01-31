@protocol HMEEventForwarder, HMMLogEventSubmitting;

@interface HMDLoggingEventForwarder : HMFObject <HMEEventForwarder> {
    id<HMEEventForwarder> _eventForwarder;
    id<HMMLogEventSubmitting> _metricDispatcher;
}

- (void).cxx_destruct;
- (void)forwardEvent:(id)a0 topic:(id)a1 completion:(id /* block */)a2;
- (id)initWithEventForwarder:(id)a0 metricDispatcher:(id)a1;

@end
