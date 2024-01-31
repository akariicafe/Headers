@class NSXPCConnection;

@interface STWebUsageController : NSObject

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)deleteAllWebHistoryForApplication:(id)a0 profileIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryDuringInterval:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteWebHistoryForURL:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForURLs:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForURLs:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)_asynchronousProxyWithHandler:(id /* block */)a0;
- (void)deleteAllWebHistoryForApplication:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteWebHistoryDuringInterval:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForDomain:(id)a0 application:(id)a1 completionHandler:(id /* block */)a2;
- (void)deleteWebHistoryForDomain:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;
- (void)deleteWebHistoryForURL:(id)a0 application:(id)a1 profileIdentifier:(id)a2 completionHandler:(id /* block */)a3;

@end
