@class NSDictionary, NSXPCConnection;

@interface FontProviderManager : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSDictionary *appSubscriptionIndo;

+ (id)sharedManager;
+ (void)registerFonts:(id)a0 enabled:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (id)registeredFontsInfo:(BOOL)a0;
+ (void)unregisterFonts:(id)a0 completionHandler:(id /* block */)a1;
+ (void)updateAppInfo;

- (void)ping;
- (id)init;
- (struct { unsigned int x0[8]; })auditToken;
- (void).cxx_destruct;
- (void)_registerFonts:(id)a0 enabled:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)_unregisterFonts:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateAppInfo;
- (id)appSubscriotionInfo;
- (id)normalizeURLs:(id)a0 addSandboxExtension:(BOOL)a1;
- (id)registeredFontsInfo:(BOOL)a0;

@end
