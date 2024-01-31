@class NSError, ISComponentIdentifier, ISEventGraph;

@interface ISStreamsProvider : NSObject {
    void /* unknown type, empty encoding */ provider;
}

- (id)init;
- (id)events;
- (void).cxx_destruct;
- (id)connectedComponentGroupsWithWindowLength:(double)a0;
- (id)eventGraphs;
- (id)eventGraphsWithWindowLength:(double)a0;
- (void)searchForEventGraphWithComponentIdentifier:(ISComponentIdentifier *)a0 completionHandler:(void (^)(ISEventGraph *, NSError *))a1;
- (void)searchForEventGraphWithComponentIdentifier:(ISComponentIdentifier *)a0 windowLength:(double)a1 completionHandler:(void (^)(ISEventGraph *, NSError *))a2;
- (id)siriConversations;
- (id)siriTurns;

@end
