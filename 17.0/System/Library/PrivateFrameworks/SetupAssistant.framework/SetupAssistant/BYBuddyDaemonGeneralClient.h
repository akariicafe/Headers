@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject {
    NSLock *_connectionLock;
    NSXPCConnection *_connection;
}

+ (id /* block */)factory;

- (id)init;
- (id)backupMetadata;
- (id)_daemonConnection;
- (void).cxx_destruct;
- (BOOL)setupAssistantNeedsToRun;
- (void)performSilentICDPUpgrade;
- (void)cancelDataMigratorDeferredExit;
- (void)deferDataMigratorExit;
- (void)enrollInSeedProgramNamed:(id)a0 withAssetAudience:(id)a1 programID:(id)a2;
- (void)ensureShortLivedTokenUpgrade;
- (void)ensureSilentLoginUpgrade;
- (id)fetchAuthenticationContextForApplePay;
- (id)fetchAuthenticationContextForBiometric;
- (void)observeFinishSetupTriggers;
- (void)startExpressSettingsUpload;
- (void)storeAuthenticationContextforApplyPay:(id)a0;
- (void)storeAuthenticationContextforBiometric:(id)a0;

@end
