@class WBSRemotePlistController;

@interface WBSPasswordWarningTopFraudTargetsManager : NSObject {
    WBSRemotePlistController *_plistController;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)getTopFraudTargetsWithCompletionHandler:(id /* block */)a0;
- (id)_initWithBuiltinListURL:(id)a0 shouldAttemptToUpdateConfiguration:(BOOL)a1;

@end
