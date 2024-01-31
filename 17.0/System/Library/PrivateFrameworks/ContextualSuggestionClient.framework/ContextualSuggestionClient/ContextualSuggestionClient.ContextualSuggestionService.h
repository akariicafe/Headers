@class NSDictionary, NSError;

@interface ContextualSuggestionClient.ContextualSuggestionService : _TtCs12_SwiftObject <ContextualSuggestionClient.ContextualSuggestionServiceInterfaceProtocol> {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ _queue_connection;
    void /* unknown type, empty encoding */ _queue_snapshots;
    void /* unknown type, empty encoding */ _queue_observers;
    void /* unknown type, empty encoding */ startupToken;
}

- (void)updateWith:(NSDictionary *)a0 completionHandler:(void (^)(NSError *))a1;

@end
