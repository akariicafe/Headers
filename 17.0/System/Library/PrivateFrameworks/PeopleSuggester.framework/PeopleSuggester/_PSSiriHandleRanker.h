@class NSXPCConnection;

@interface _PSSiriHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)rankedHandles:(id)a0 context:(id)a1;

@end
