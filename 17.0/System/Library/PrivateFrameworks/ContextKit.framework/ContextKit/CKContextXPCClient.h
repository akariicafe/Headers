@interface CKContextXPCClient : NSObject

+ (void)initialize;
+ (id)newXpcConnection;
+ (void)registerForServiceUpdateNotifications:(id)a0;
+ (id)invalidateAndGetNewXpcConnection;
+ (id)isXPCConnectionError:(id)a0;
+ (void)invalidateXpcConnection;
+ (id)xpcConnection;

@end
