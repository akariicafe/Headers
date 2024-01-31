@class NSString, NSPointerArray, NSMutableArray;
@protocol QLNotificationCenterProtocol;

@interface QLNotificationCenter : NSObject <QLNotificationCenterProtocol> {
    id<QLNotificationCenterProtocol> _remoteNotificationCenter;
    NSPointerArray *_observers;
    NSMutableArray *_bufferedNotifications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)postNotificationName:(id)a0 userInfo:(id)a1;
- (void)registerObserver:(id)a0;
- (void)unregisterObserver:(id)a0;
- (void).cxx_destruct;
- (long long)_indexOfObserver:(id)a0;
- (void)_bufferNotificationName:(id)a0 userInfo:(id)a1;
- (void)_sendEnqueuedNotifications;
- (BOOL)_tryPostingNotificationName:(id)a0 userInfo:(id)a1;
- (void)setRemoteNotificationCenter:(id)a0;

@end
