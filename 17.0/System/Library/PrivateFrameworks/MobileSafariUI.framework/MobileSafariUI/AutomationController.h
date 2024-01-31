@class _WKAutomationSessionConfiguration, NSString, NSMapTable, _WKAutomationSession, SFClient, UIAutonomousSingleAppModeSession;

@interface AutomationController : _SFAutomationController <_WKAutomationDelegate, _WKAutomationSessionDelegate> {
    BOOL _automationSessionRequestedFirstWebView;
    BOOL _closingAutomationTabsForSessionTeardown;
    NSMapTable *_activeDialogs;
    SFClient *_sharingClient;
    UIAutonomousSingleAppModeSession *_guidedAccessSession;
    _WKAutomationSessionConfiguration *_provisionalSessionConfiguration;
}

@property (readonly, nonatomic) _WKAutomationSession *automationSession;
@property (readonly, nonatomic) BOOL canCreateNewAutomationTabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationDidEnterBackground;
- (id)init;
- (void)dealloc;
- (id)processPool;
- (void).cxx_destruct;
- (void)_automationSession:(id)a0 acceptCurrentJavaScriptDialogForWebView:(id)a1;
- (long long)_automationSession:(id)a0 currentPresentationForWebView:(id)a1;
- (void)_automationSession:(id)a0 dismissCurrentJavaScriptDialogForWebView:(id)a1;
- (BOOL)_automationSession:(id)a0 isShowingJavaScriptDialogForWebView:(id)a1;
- (id)_automationSession:(id)a0 messageOfCurrentJavaScriptDialogForWebView:(id)a1;
- (void)_automationSession:(id)a0 requestNewWebViewWithOptions:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)_automationSession:(id)a0 requestSwitchToWebView:(id)a1 completionHandler:(id /* block */)a2;
- (void)_automationSession:(id)a0 setUserInput:(id)a1 forCurrentJavaScriptDialogForWebView:(id)a2;
- (long long)_automationSession:(id)a0 typeOfCurrentJavaScriptDialogForWebView:(id)a1;
- (void)_automationSessionDidDisconnectFromRemote:(id)a0;
- (void)_processPool:(id)a0 didRequestAutomationSessionWithIdentifier:(id)a1 configuration:(id)a2;
- (BOOL)_processPoolAllowsRemoteAutomation:(id)a0;
- (void)_processPoolDidRequestInspectorDebuggablesToWakeUp:(id)a0;
- (void)terminateSession;
- (id)_browserControllerForAutomation;
- (void)updatePreferencesForAutomation:(id)a0;
- (void)_developerPreferencesChanged;
- (BOOL)_uninstallAutomationSession;
- (void)_uninstallGuidedAccessSession;
- (void)createAutomationSessionWithIdentifier:(id)a0;
- (void)createAutomationSessionWithIdentifier:(id)a0 configuration:(id)a1 retryBehavior:(long long)a2;
- (void)tabDocument:(id)a0 runJavaScriptAlertPanelWithMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)tabDocument:(id)a0 runJavaScriptConfirmPanelWithMessage:(id)a1 completionHandler:(id /* block */)a2;
- (void)tabDocument:(id)a0 runJavaScriptTextInputPanelWithPrompt:(id)a1 defaultText:(id)a2 completionHandler:(id /* block */)a3;

@end
