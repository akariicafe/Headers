@class NSXPCConnection;

@interface LNRelevantIntentProvider : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void).cxx_destruct;
- (void)relevantIntentsForBundleIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)relevantIntentsWithReply:(id /* block */)a0;

@end
