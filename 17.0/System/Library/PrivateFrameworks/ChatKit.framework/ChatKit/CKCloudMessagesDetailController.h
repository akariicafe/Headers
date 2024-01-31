@class STStoragePlugin, UIProgressHUD;
@protocol IMDaemonMultiplexedConnectionManaging;

@interface CKCloudMessagesDetailController : PSListController

@property (retain, nonatomic) STStoragePlugin *plugin;
@property (retain, nonatomic) UIProgressHUD *cloudKitProgressView;
@property (retain, nonatomic) id<IMDaemonMultiplexedConnectionManaging> daemonConnection;

+ (id)specifier;

- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)disconnectFromDaemon;
- (id)specifiers;
- (void).cxx_destruct;
- (void)connectToDaemon;
- (void)_displayiCloudErrorMessage;
- (BOOL)_isSyncingWithCloud;
- (id)cloudDocsSpecifiers;
- (id)dataSize:(id)a0;
- (void)disableAndDelete:(id)a0;
- (void)hideSpinner;
- (void)setEnabledDidReturned:(id)a0;
- (void)showSpinnerMessage:(id)a0;
- (void)tryToDisableAllDevicesDidReturn:(id)a0;
- (void)undoDelete:(id)a0;

@end
