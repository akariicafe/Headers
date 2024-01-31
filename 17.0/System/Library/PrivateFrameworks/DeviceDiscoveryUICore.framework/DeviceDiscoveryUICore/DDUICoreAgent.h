@class _DDUINotificationManager, DDUIEndpointPairingListener;

@interface DDUICoreAgent : NSObject

@property (retain, nonatomic) DDUIEndpointPairingListener *endpointPairingListener;
@property (retain, nonatomic) _DDUINotificationManager *notificationManager;
@property (nonatomic) BOOL started;

+ (id)sharedInstance;

- (void)_handleIncomingContinuityCameraConfirmation:(id)a0;
- (void)start;
- (void)_showNotificationForPairingSession:(id)a0 pairingMessage:(id)a1;
- (void)_setupListenerIfNeededWithCompletion:(id /* block */)a0;
- (void)_handleIncomingPairingSession:(id)a0 pairingMessage:(id)a1;
- (void).cxx_destruct;
- (void)_startOnQueue;

@end
