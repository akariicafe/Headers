@class NSXPCInterface, NSXPCConnection;

@interface CHPluginHelper : NSObject {
    NSXPCConnection *_connection;
    NSXPCInterface *_interface;
}

- (id)init;
- (void).cxx_destruct;
- (void)recentCallsWithLimitingTypes:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (id)recentCallsWithLimitingTypes:(unsigned int)a0 error:(id *)a1;
- (void)unreadCallCountWithCompletionHandler:(id /* block */)a0;
- (unsigned long long)unreadCallCountWithError:(id *)a0;

@end
