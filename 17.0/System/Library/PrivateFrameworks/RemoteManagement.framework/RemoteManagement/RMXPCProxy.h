@interface RMXPCProxy : NSObject

+ (id)newInterface;
+ (id)newAgentConnection;
+ (id)newConnectionWithListenerEndpoint:(id)a0;
+ (id)newConnectionWithScope:(long long)a0;
+ (id)newDaemonConnection;

@end
