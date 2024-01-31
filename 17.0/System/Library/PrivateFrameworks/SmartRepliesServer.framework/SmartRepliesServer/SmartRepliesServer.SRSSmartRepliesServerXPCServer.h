@class NSString, NSArray, NSDictionary, NSError;

@interface SmartRepliesServer.SRSSmartRepliesServerXPCServer : NSObject <NSXPCListenerDelegate, SmartReplies.SRSmartRepliesXPCProtocol> {
    void /* unknown type, empty encoding */ xpcListener;
    void /* unknown type, empty encoding */ serverRequestHandler;
}

- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)predictForMessage:(NSString *)a0 conversationTurns:(NSArray *)a1 language:(NSString *)a2 plistPath:(NSString *)a3 espressoModelPath:(NSString *)a4 vocabPath:(NSString *)a5 heads:(NSArray *)a6 completion:(void (^)(NSDictionary *, NSError *))a7;

@end
