@protocol DDParsecHostVCInterface;

@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface> {
    BOOL _receivedInteractionDidFinish;
}

@property (weak) id<DDParsecHostVCInterface> hostSideDelegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)remoteVCIsReady;
- (void)getStatusBarHidden:(id /* block */)a0;
- (void)interactionEnded;
- (void)interactionEndedWithPunchout:(BOOL)a0;
- (void)loadReportAnIssueImage:(id /* block */)a0;
- (void)openParsecURL:(id)a0;
- (void)openTrailerPunchout:(id)a0;
- (void)performClientQueryWithServerAccessPermitted:(BOOL)a0 localSearchPermitted:(BOOL)a1;
- (void)performClientTextQueryWithTerm:(id)a0 queryId:(unsigned long long)a1 sessionId:(id)a2 userAgent:(id)a3 reply:(id /* block */)a4;
- (void)reportAnIssueWithReportIdentifier:(id)a0 sfReportData:(id)a1;
- (void)showingErrorView:(BOOL)a0;
- (void)showingFTE:(BOOL)a0;

@end
