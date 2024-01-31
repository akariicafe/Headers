@class NSXPCConnection;

@interface _PSHandleRanker : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)rankedHandlesFromCandidateHandles:(id)a0;

@end
