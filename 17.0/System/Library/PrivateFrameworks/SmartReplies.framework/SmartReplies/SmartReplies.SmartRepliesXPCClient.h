@class NSString, NSArray, NSDictionary, NSError;

@interface SmartReplies.SmartRepliesXPCClient : _TtCs12_SwiftObject <SmartReplies.SRSmartRepliesXPCProtocol> {
    void /* unknown type, empty encoding */ xpcServer;
}

- (void)predictForMessage:(NSString *)a0 conversationTurns:(NSArray *)a1 language:(NSString *)a2 plistPath:(NSString *)a3 espressoModelPath:(NSString *)a4 vocabPath:(NSString *)a5 heads:(NSArray *)a6 completion:(void (^)(NSDictionary *, NSError *))a7;

@end
