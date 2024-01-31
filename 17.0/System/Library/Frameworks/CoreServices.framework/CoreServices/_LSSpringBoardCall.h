@class NSString, NSDictionary, NSXPCConnection, BSServiceConnectionEndpoint;

@interface _LSSpringBoardCall : NSObject <NSCopying> {
    NSString *_schemeIfNotFileURL;
}

@property (copy) NSString *bundleIdentifier;
@property (copy) NSDictionary *launchOptions;
@property (retain) NSXPCConnection *clientXPCConnection;
@property BOOL callCompletionHandlerWhenFullyComplete;
@property (retain) BSServiceConnectionEndpoint *targetServiceConnectionEndpoint;

+ (id)springBoardDeadlockPreventionQueue;
+ (id)springBoardQueue;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)callSpringBoardWithCompletionHandler:(id /* block */)a0;
- (void)callWithCompletionHandler:(id /* block */)a0;
- (void)lieWithCompletionHandler:(id /* block */)a0;
- (void)promptAndCallSpringBoardWithCompletionHandler:(id /* block */)a0;

@end
