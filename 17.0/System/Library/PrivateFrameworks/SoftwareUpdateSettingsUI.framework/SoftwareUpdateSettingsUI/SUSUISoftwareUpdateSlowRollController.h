@class NSObject;
@protocol SUSUISoftwareUpdateSlowRollControllerDelegate;

@interface SUSUISoftwareUpdateSlowRollController : SUSUISoftwareUpdateController

@property (weak, nonatomic) NSObject<SUSUISoftwareUpdateSlowRollControllerDelegate> *delegate;
@property (nonatomic) unsigned long long slowRollUpdateType;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (int)currentState;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)updateDescriptor;
- (id)suError;
- (id)_alternateUpdateButtonSpecifierForState:(int)a0;
- (id)_alternateUpdateGroupSpecifierForState:(int)a0;
- (id)_automaticUpdateButtonSpecifierForState:(int)a0;
- (id)_automaticUpdateGroupSpecifierForState:(int)a0;
- (id)_betaUpdatesButtonSpecifierForState:(int)a0;
- (id)alternateUpdateDescriptor;
- (id)analyticsDownloadAndInstallNowTappedString;
- (id)analyticsDownloadAndInstallTonightTappedString;
- (id)analyticsDownloadOnlyTappedString;
- (id)analyticsOpenStorageTappedString;
- (BOOL)hasAlternateUpdate;
- (id)installLaterTappedString;
- (id)installNowTappedString;
- (id)learnMoreTappedString;
- (void)manager:(id)a0 downloadDidStart:(id)a1;
- (void)manager:(id)a0 downloadProgressChanged:(id)a1 displayStyle:(int)a2;
- (void)manager:(id)a0 prepareToDownloadAndInstall:(id)a1 withDownload:(id)a2 andDownloadError:(id)a3 didSuccessfullyStart:(BOOL)a4 withError:(id)a5 usingCompletionHandler:(id /* block */)a6;
- (id)paneTitle;
- (void)startDownloadAndInstallOnMainPane;
- (BOOL)supportsPullToRefresh;
- (BOOL)updateReadyToDownload;

@end
