@class NSString, NSXPCConnection;
@protocol SUSUICommandLineToolClientDelegate;

@interface SUSUICommandLineToolClient : NSObject <SUSUICommandLineToolClientInterface> {
    NSXPCConnection *_serverConnection;
    BOOL _connected;
    BOOL _serverIsExiting;
}

@property (weak, nonatomic) id<SUSUICommandLineToolClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateConnection;
- (void)_noteConnectionDropped;
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)setPasscodePolicy:(unsigned long long)a0;
- (void)_connectToServerIfNecessary;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id)_remoteInterfaceWithErrorHandler:(id /* block */)a0;
- (id)_remoteInterface;
- (void)reboot:(BOOL)a0;
- (id)URLForType:(unsigned long long)a0;
- (void)_noteServerExiting;
- (void)dismissAllAlerts;
- (void)downloadDidFinish;
- (void)getDDMAlertStatus:(id /* block */)a0;
- (void)showAuthenticationUIWithOptions:(unsigned long long)a0 result:(id /* block */)a1;
- (void)showDDMAlert:(long long)a0 install:(BOOL)a1;
- (void)showEmergencyCallUIWithOptions:(unsigned long long)a0 result:(id /* block */)a1;
- (void)showFollowUp:(unsigned long long)a0;
- (void)showLaggardsUi:(unsigned long long)a0 usingFakeData:(BOOL)a1 result:(id /* block */)a2;
- (void)showMiniAlert:(unsigned long long)a0 usingFakeData:(BOOL)a1 errorCode:(id)a2;
- (void)simulateComingFromOTAUpdate;
- (void)toggleSettingsBadge:(BOOL)a0;

@end
