@interface CBSUtilities : NSObject

+ (id)proxyServer;
+ (BOOL)isCheckerBoardActive;
+ (void)setLocaleIdentifier:(id)a0 completion:(id /* block */)a1;
+ (BOOL)_currentProcessHasEntitlement:(id)a0;
+ (void)connectToSSID:(id)a0 completion:(id /* block */)a1;
+ (void)connectToSSID:(id)a0 password:(id)a1 completion:(id /* block */)a2;
+ (void)connectedNetwork:(id /* block */)a0;
+ (void)currentLocaleIdentifier:(id /* block */)a0;
+ (void)diagnosticsRunning:(id /* block */)a0;
+ (void)dimDisplay;
+ (void)disableNetworkReconnect;
+ (void)displayDimmed:(id /* block */)a0;
+ (void)enableNetworkReconnect;
+ (void)exitCheckerBoard;
+ (void)hideSceneStatusBar;
+ (void)launchDiagnostics;
+ (void)launchDiagnosticsApp;
+ (void)networkReconnectEnabled:(id /* block */)a0;
+ (void)networkScanWithCompletion:(id /* block */)a0;
+ (BOOL)rebootToCheckerBoard;
+ (void)sceneStatusBarStyle:(long long)a0;
+ (void)showSceneStatusBar;
+ (void)undimDisplay;

@end
