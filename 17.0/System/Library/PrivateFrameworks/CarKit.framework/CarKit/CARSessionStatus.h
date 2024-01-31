@class CARSessionChangedNotificationConverter, CARSession, CARObserverHashTable, NSObject;
@protocol OS_dispatch_source, CARSessionObserving;

@interface CARSessionStatus : NSObject

@property (retain, nonatomic) CARSession *session;
@property (retain, nonatomic) CARSessionChangedNotificationConverter *notificationConverter;
@property (retain, nonatomic) CARObserverHashTable *sessionObservers;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *connectingTimer;
@property (nonatomic) unsigned long long timeoutInterval;
@property (readonly, nonatomic) BOOL clientIsCarPlayShell;
@property (readonly, nonatomic) BOOL saveInfoResponse;
@property (readonly, nonatomic) CARSession *currentSession;
@property (weak, nonatomic) id<CARSessionObserving> sessionObserver;

+ (id)sessionUpdatesQueue;

- (void)waitForSessionInitialization;
- (id)init;
- (void)dealloc;
- (void)_handleStartingWiredConnectionNotification;
- (void)_handleCarCapabilitiesUpdated;
- (void)_notifyDidDisconnectSession:(id)a0;
- (void)_notifyCancelledConnectionAttemptOnTransport:(unsigned long long)a0;
- (void)_handleEndpointActivated:(id)a0;
- (void)_updateSession;
- (id)initForCarPlayShell;
- (void)_handleConnectingTimeout;
- (void)_handleConfigurationUpdated;
- (void)_handleInCarNotification;
- (void)_startConnectingTimer;
- (void)_notifyDidConnectSession:(id)a0;
- (void)addSessionObserver:(id)a0;
- (void)_handleSessionChanged;
- (void)_handleAuthenticationSucceeded:(id)a0;
- (void).cxx_destruct;
- (id)initWithOptions:(unsigned long long)a0;
- (void)_notifyDidUpdateSession:(id)a0;
- (void)_notifyStartedConnectionAttemptOnTransport:(unsigned long long)a0;
- (void)_stopConnectingTimer;
- (id)initAndWaitUntilSessionUpdated;
- (void)removeSessionObserver:(id)a0;

@end
