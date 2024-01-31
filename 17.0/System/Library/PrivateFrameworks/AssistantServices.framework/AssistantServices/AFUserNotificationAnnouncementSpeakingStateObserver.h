@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, AFUserNotificationAnnouncementSpeakingStateDelegate;

@interface AFUserNotificationAnnouncementSpeakingStateObserver : NSObject <AFUserNotificationAnnouncementSpeakingStateServiceDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFUserNotificationAnnouncementSpeakingStateDelegate> _delegate;
    NSMutableSet *_observingNotifications;
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_currentConnection;
- (id)_connection;
- (void)connectionInterrupted;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)_tearDown;
- (void)dealloc;
- (void)invalidate;
- (void)connectionInvalidated;
- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (void)_notifyObserverOfFailureForAllObservingNotifications;
- (void)_removeObserverForNotificationRequestIdentifier:(id)a0;
- (void)_speakingStateDidChange:(long long)a0 forIdentifiers:(id)a1;
- (void)_startObservingNotificationWithRequestIdentifier:(id)a0;
- (void)cleanUpConnection;
- (void)speakingStateDidChange:(long long)a0 forIdentifiers:(id)a1;
- (void)startObservingNotificationWithRequestIdentifier:(id)a0;
- (void)stopObservingNotificationWithRequestIdentifier:(id)a0;

@end
