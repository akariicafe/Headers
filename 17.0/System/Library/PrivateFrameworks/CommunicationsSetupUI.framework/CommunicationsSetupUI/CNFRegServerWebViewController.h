@class NSMutableArray, NSString, CNFRegController, UIWebView, CNFRegLoadingView, NSTimer, RUILoader;

@interface CNFRegServerWebViewController : UIViewController <UIWebViewDelegate, RUIObjectModelDelegate> {
    CNFRegLoadingView *_loadingView;
    NSTimer *_timeoutTimer;
    RUILoader *_loader;
    NSMutableArray *_objectModels;
    struct { unsigned char isLoading : 1; unsigned char isLoaded : 1; unsigned char wantsWifi : 1; unsigned char modifiedWiFi : 1; unsigned char automaticKeyboardWasDisabled : 1; unsigned char checkedLogState : 1; unsigned char shouldLog : 1; unsigned int timedOut; } _webControllerFlags;
}

@property (retain, nonatomic) UIWebView *webView;
@property (retain, nonatomic) CNFRegController *regController;
@property (readonly, nonatomic) BOOL isLoaded;
@property (readonly, nonatomic) BOOL isLoading;
@property (readonly, nonatomic) BOOL timedOut;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadURL:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)isLoading;
- (void)viewDidLoad;
- (BOOL)isLoaded;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)applicationWillSuspend;
- (BOOL)timedOut;
- (void)_handleTimeout;
- (void)viewDidDisappear:(BOOL)a0;
- (void)cancelButtonPressed:(id)a0;
- (void)viewDidUnload;
- (void)hideSpinner;
- (BOOL)_shouldLog;
- (void)showSpinner;
- (void)loader:(id)a0 didFailWithError:(id)a1;
- (void)loader:(id)a0 receivedObjectModel:(id)a1 actionSignal:(unsigned long long)a2;
- (void)objectModel:(id)a0 pressedButton:(id)a1 attributes:(id)a2;
- (void)objectModel:(id)a0 pressedLink:(id)a1 httpMethod:(id)a2;
- (void)objectModelDidChange:(id)a0;
- (void)objectModelPressedBack:(id)a0;
- (id)parentViewControllerForObjectModel:(id)a0;
- (id)logName;
- (void)_cleanupLoader;
- (void)_popObjectModelAnimated:(BOOL)a0;
- (void)_startTimeoutWithDuration:(double)a0;
- (void)_stopTimeout;
- (void)_timeoutFired:(id)a0;
- (BOOL)canSendURLRequest:(id)a0;
- (id)initWithRegController:(id)a0;
- (id)overrideURLForURL:(id)a0;
- (void)receivedStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (void)setHeadersForRequest:(id)a0;
- (void)setWantsWifi:(BOOL)a0;
- (BOOL)shouldSetHeadersForRequest:(id)a0;
- (void)startRequiringWifi;
- (void)stopRequiringWifi;

@end
