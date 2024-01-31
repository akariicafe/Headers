@interface MOXPCRemoteObjectProxy : NSObject

+ (void)proxyFromConnection:(id)a0 withRetryCount:(unsigned long long)a1 proxyHandler:(id /* block */)a2;
+ (void)synchronousProxyFromConnection:(id)a0 withRetryCount:(unsigned long long)a1 proxyHandler:(id /* block */)a2;

@end
