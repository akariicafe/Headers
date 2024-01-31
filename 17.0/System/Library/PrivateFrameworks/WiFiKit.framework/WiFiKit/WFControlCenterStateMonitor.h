@interface WFControlCenterStateMonitor : WFWiFiStateMonitor

- (void)_performAction:(long long)a0;
- (void)performAction:(id /* block */)a0;
- (BOOL)_isCellularOutrankingWiFi;
- (BOOL)_airplaneModeEnabled;
- (void)performAction;
- (void)_promptCellularOutankDisable;
- (void)_promptCarPlayDisable;
- (void)_promptMISDisable;

@end
