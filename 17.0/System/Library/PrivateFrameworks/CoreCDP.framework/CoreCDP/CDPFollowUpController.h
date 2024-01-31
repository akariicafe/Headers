@class CDPDaemonConnection;

@interface CDPFollowUpController : NSObject {
    CDPDaemonConnection *_daemonConn;
}

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (BOOL)clearFollowUpWithContext:(id)a0 error:(id *)a1;
- (BOOL)postFollowUpWithContext:(id)a0 error:(id *)a1;

@end
