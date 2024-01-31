@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface XAMObserver : NSObject {
    NSMutableDictionary *_handlers;
    BOOL _hasReceivedAutomationModeEnabledState;
    int _observationToken;
}

@property (class, readonly) XAMObserver *sharedInstance;

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id /* block */ readerConnectionFactory;
@property (readonly) NSString *changeNotificationName;
@property (readonly) BOOL isAutomationModeEnabled;
@property (readonly) BOOL automationModeRequiresAuthentication;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_notifyHandlers;
- (void)_listenForAutomationModeChangeNotifications;
- (BOOL)currentAutomationModeEnabledStateFromDaemon;
- (id)initWithChangeNotificationName:(id)a0 readerConnectionFactory:(id /* block */)a1;
- (id)registerAutomationModeChangeHandlerOnQueue:(id)a0 withBlock:(id /* block */)a1;
- (void)unregisterAutomationModeChangeHandler:(id)a0;

@end
