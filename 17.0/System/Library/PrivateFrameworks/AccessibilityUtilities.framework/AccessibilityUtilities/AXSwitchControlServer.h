@interface AXSwitchControlServer : AXServer

+ (id)server;

- (void)_willClearServer;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (BOOL)isScannerPaused;
- (BOOL)setupAutomation;
- (BOOL)triggerCommand:(long long)a0;
- (BOOL)isScannerActive;
- (BOOL)_triggerAutomationCommand:(long long)a0;
- (id)currentFocusedElement;
- (struct CGPoint { double x0; double x1; })headTrackingPoint;
- (BOOL)isAutoScanEnabled;
- (BOOL)isDwellEnabled;
- (BOOL)isManualScanEnabled;
- (BOOL)tearDownAutomation;

@end
