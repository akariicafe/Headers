@interface IMDCollaborationClearNoticeRateLimiter : NSObject {
    void /* unknown type, empty encoding */ rateLimiterOverride;
    void /* unknown type, empty encoding */ persistenceQueue;
    void /* unknown type, empty encoding */ noticeEventHistory;
}

- (id)init;
- (void).cxx_destruct;
- (void)didSendWithNotice:(id)a0;
- (BOOL)shouldSendWithNotice:(id)a0;

@end
