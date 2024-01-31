@class NSFileAccessNode, NSXPCConnection;

@interface NSFileReactorProxy : NSObject {
    NSXPCConnection *_client;
    id _reactorID;
    NSFileAccessNode *_itemLocation;
    unsigned int _effectiveUserIdentifier;
}

@property unsigned int effectiveUserIdentifier;

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)a0 usingBlock:(id /* block */)a1;

- (void)setItemLocation:(id)a0;
- (id)descriptionWithIndenting:(id)a0;
- (void)dealloc;
- (id)client;
- (void)invalidate;
- (void)forwardUsingProxy:(id)a0;
- (id)description;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)a0;
- (id)_clientProxy;
- (BOOL)allowedForURL:(id)a0;
- (id)itemLocation;
- (id)initWithClient:(id)a0 reactorID:(id)a1;
- (id)reactorID;

@end
