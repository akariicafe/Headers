@class BRCAccountSessionFPFS;

@interface BRCCKMetricEndpoint : BRCMetricEndpoint {
    BRCAccountSessionFPFS *_session;
}

- (id)initWithSession:(id)a0;
- (void)submitEventMetric:(id)a0;
- (void).cxx_destruct;

@end
