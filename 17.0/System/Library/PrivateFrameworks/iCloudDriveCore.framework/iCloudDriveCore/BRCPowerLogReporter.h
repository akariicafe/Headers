@class NSObject, BRCAccountSessionFPFS, NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface BRCPowerLogReporter : NSObject {
    BRCAccountSessionFPFS *_session;
    NSMutableDictionary *_deepScanReasonsToReport;
    NSObject<OS_dispatch_source> *_reporterTimer;
    NSObject<OS_dispatch_queue> *_reporterQueue;
}

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)_reportStats;
- (void)reportDeepScanReason:(id)a0 forAppLibraryID:(id)a1;
- (double)statsReportInterval;
- (double)timeUntilNextReport;

@end
