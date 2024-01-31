@class NSString, NSXPCConnection;

@interface NLXPCSpellServerClient : NSObject {
    NSString *_serverName;
    NSXPCConnection *_connection;
    BOOL _invalidated;
}

+ (void)requestAssetsForLanguage:(id)a0;
+ (id)spellServerClient;

- (void)dealloc;
- (id)connection;
- (BOOL)isValid;
- (void).cxx_destruct;
- (id)serverName;
- (void)sendCommand:(id)a0;
- (id)initWithServerName:(id)a0;

@end
