@class NSTimer;

@interface CNFRegAccountWebViewController : CNFRegServerWebViewController {
    BOOL _listeningForBagLoad;
    NSTimer *_bagLoadTimer;
}

@property (nonatomic) BOOL failedBagLoad;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_reload;
- (void)loadView;
- (id)bagKey;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)logName;
- (BOOL)_loadURLFromBag;
- (void)_bagLoadTimeout:(id)a0;
- (void)_handleFTServerBagFinishedLoading;
- (id)_nonModalParentController;
- (void)_reloadDelayed;
- (void)_showGenericErrorWithHandler;
- (void)_showURLDidNotLoadAlert;
- (void)_startBagLoadTimer;
- (void)_startListeningForBagLoad;
- (void)_stopBagLoadTimer;
- (void)_stopCurrentReload;
- (void)_stopListeningForBagLoad;
- (id)_viewPortForFormSheetPresentation;
- (id)_viewPortForNormalPresentation;
- (id)_viewPortStringForSize:(struct CGSize { double x0; double x1; })a0;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (BOOL)canSendURLRequest:(id)a0;
- (void)cancelTapped;
- (id)clientInfoHeaderValue;
- (void)completeHandoffWithStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (void)doHandoffWithStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (id)initWithRegController:(id)a0;
- (id)interfaceLayoutHeaderValue;
- (id)pushTokenHeaderValue;
- (void)receivedStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (id)securityHeaderValue;
- (id)serviceHeaderValue;
- (void)setHeadersForRequest:(id)a0;
- (BOOL)shouldSetHeadersForRequest:(id)a0;
- (id)viewPortHeaderValue;

@end
