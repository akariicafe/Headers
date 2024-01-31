@protocol IMDaemonMultiplexedConnectionManaging, IMSyncedSettingsManaging;

@interface IMOneTimeCodeAccelerator : NSObject

@property (class, retain) id<IMSyncedSettingsManaging> syncedSettingsManager;

@property (retain, nonatomic) id<IMDaemonMultiplexedConnectionManaging> daemonConnection;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ settingUpdateBlock;

- (void)dealloc;
- (void)_incomingCodeUpdateFromDaemon:(id)a0;
- (void)onboardDeleteVerificationCodesIfNeededWithCompletionHandler:(id /* block */)a0;
- (void)consumeCodeWithGuid:(id)a0;
- (void)_deleteVerificationCodesDidChange:(id)a0;
- (void)fetchAutoDeletionPreferenceWithCompletionHandler:(id /* block */)a0;
- (void)setAutoDeletionPreference:(BOOL)a0;
- (void).cxx_destruct;
- (void)onboardDeleteVerificationCodesIfNeededWithMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)setUpConnectionToDaemaon;
- (id)initWithBlockForUpdates:(id /* block */)a0;

@end
