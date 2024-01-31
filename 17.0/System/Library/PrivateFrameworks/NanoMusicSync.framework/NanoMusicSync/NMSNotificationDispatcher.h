@class NSString, NSObject;
@protocol NMSNotificationDispatcherDelegate, OS_dispatch_queue;

@interface NMSNotificationDispatcher : NSObject {
    int _localNotifyToken;
    int _remoteNotifyToken;
    NSString *_localDarwinNotificationName;
    NSString *_remoteDarwinNotificationName;
    long long _waitingCount;
    BOOL _hasPendingUpdates;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) NSString *baseNotificationName;
@property (weak, nonatomic) id<NMSNotificationDispatcherDelegate> delegate;

- (id)initWithNotificationName:(id)a0;
- (void)dealloc;
- (void)_postLocalDarwinNotification;
- (void)scheduleLocalDarwinNotification;
- (void).cxx_destruct;
- (void)_handleRemoteNotification;
- (void)beginWaitingForUpdates;
- (void)_handleLocalNotificationIgnoringSenderPID:(BOOL)a0;
- (void)endWaitingForUpdates;

@end
