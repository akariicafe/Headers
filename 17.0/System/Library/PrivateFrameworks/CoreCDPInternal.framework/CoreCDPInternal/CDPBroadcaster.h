@class NSDistributedNotificationCenter;

@interface CDPBroadcaster : NSObject

@property (readonly, nonatomic) NSDistributedNotificationCenter *broadcaster;

+ (void)_broadcastNotificationName:(id)a0 userInfo:(id)a1;
+ (void)broadcastWalrusStateChangeNotification;
+ (void)broadcastWebAccessStateChangeNotification;

- (id)init;
- (void).cxx_destruct;
- (void)sendNotification:(id)a0 userInfo:(id)a1;

@end
