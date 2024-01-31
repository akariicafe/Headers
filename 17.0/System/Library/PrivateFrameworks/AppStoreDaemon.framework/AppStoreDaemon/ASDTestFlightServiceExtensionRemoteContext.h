@class NSString, ASDTestFlightServiceExtension;

@interface ASDTestFlightServiceExtensionRemoteContext : ASDTestFlightServiceExtensionContext <ASDTestFlightServiceExtensionRemoteXPCInterface>

@property (retain, nonatomic) ASDTestFlightServiceExtension *extensionInstance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)serviceExtensionPerformCleanup;
- (void)didReachTerminalPhaseWithBetaBundle:(id)a0 terminalPhase:(long long)a1 error:(id)a2 reply:(id /* block */)a3;
- (void)didReceivePushMessages:(id)a0 reply:(id /* block */)a1;
- (void)didReceivePushToken:(id)a0 reply:(id /* block */)a1;
- (void)invokeCommand:(id)a0 withArguments:(id)a1 reply:(id /* block */)a2;
- (void)reloadAppsFromServerWithReply:(id /* block */)a0;
- (void)serviceExtensionTimeWillExpire;

@end
