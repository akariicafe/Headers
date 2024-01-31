@class NSDictionary, FPRTCReportingSessionManager, NSArray;

@interface BRCRTCReporter : NSObject {
    NSDictionary *_userInfo;
    FPRTCReportingSessionManager *_reportingManager;
    NSDictionary *_globalPayload;
    NSArray *_allowedZoneNamePrefixes;
}

- (id)init;
- (void)_init;
- (void).cxx_destruct;
- (BOOL)_shouldRemoveZoneNameWithPayload:(id)a0;
- (id)initWithFPRTCReportingSession:(id)a0;
- (void)postReportWithCategory:(unsigned long long)a0 type:(unsigned long long)a1 payload:(id)a2 error:(id)a3;

@end
