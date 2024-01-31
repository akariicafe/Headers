@class PPRecordMonitoringHelper, NSDate;

@interface PPXPCNamedEntityStoreQueryMonitorSession : NSObject {
    PPRecordMonitoringHelper *_monitoringHelper;
    NSDate *_lastCallDate;
}

- (void).cxx_destruct;
- (void)setLastCallDate;
- (id)initWithMonitoringHelper:(id)a0;
- (id)lastCallDate;
- (id)monitoringHelper;

@end
