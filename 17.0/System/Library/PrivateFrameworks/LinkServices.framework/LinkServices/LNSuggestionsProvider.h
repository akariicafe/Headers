@class NSXPCConnection;

@interface LNSuggestionsProvider : NSObject

@property (readonly, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void)dealloc;
- (id)suggestedActionsForSuggestionsRequests:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
