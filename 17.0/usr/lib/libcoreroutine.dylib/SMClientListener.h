@class NSString, RTAuthorizationManager, NSXPCInterface, SMInitiatorService, SMMessagingService, SMSuggestionsStore, RTDefaultsManager, RTDistanceCalculator, SMSuggestionsManager, SMSessionStore, SMReceiverService;

@interface SMClientListener : RTXPCListener <NSXPCListenerDelegate> {
    NSXPCInterface *_frameworkInterface;
    NSXPCInterface *_daemonInterface;
}

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) SMInitiatorService *initiatorService;
@property (retain, nonatomic) SMSessionStore *sessionStore;
@property (retain, nonatomic) SMSuggestionsManager *suggestionsManager;
@property (retain, nonatomic) SMSuggestionsStore *suggestionsStore;
@property (retain, nonatomic) SMMessagingService *messagingService;
@property (retain, nonatomic) SMReceiverService *receiverService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_setup;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)_setupConnection:(id)a0 forClient:(id)a1;
- (id)handleClientConnection:(id)a0;
- (void)handleDisconnectionForDaemonClient:(id)a0;
- (id)initWithDefaultsManager:(id)a0 authorizationManager:(id)a1 distanceCalculator:(id)a2 initiatorService:(id)a3 messagingService:(id)a4 receiverService:(id)a5 sessionStore:(id)a6 suggestionsManager:(id)a7 suggestionsStore:(id)a8;

@end
