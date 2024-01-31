@class Protocol, NSString, NSXPCConnection, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, CAMNebulaDaemonConnectionManagerDelegate;

@interface CAMNebulaDaemonConnectionManager : NSObject <NSXPCConnectionDelegate, CAMNebulaDaemonClientProtocol, CAMNebulaDaemonBundleIdentifierProtocol>

@property (readonly, nonatomic) NSXPCConnection *_connection;
@property (readonly, copy, nonatomic) NSString *_name;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_queue;
@property (readonly, nonatomic) NSMutableDictionary *_tasksPerIdentifier;
@property (readonly, nonatomic) NSMutableArray *_registeredTargets;
@property (readonly, nonatomic) NSMutableArray *_registeredProtocols;
@property (weak, nonatomic) id<CAMNebulaDaemonConnectionManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *clientAccess;
@property (readonly, copy, nonatomic) Protocol *allowedProtocol;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_clientProtocolInterface;
+ (id)_daemonProtocolInterface;

- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)_getProxyForExecutingBlock:(id /* block */)a0;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)a0;
- (void)forceStopTimelapseCaptureWithReasons:(long long)a0;
- (void).cxx_destruct;
- (void)pingAfterInterruption;
- (id)_targetsForSelector:(SEL)a0;
- (void)addTarget:(id)a0 forProtocol:(id)a1;
- (id)initWithConnection:(id)a0 name:(id)a1 bundleIdentifier:(id)a2 queue:(id)a3 clientAccess:(id)a4 allowedProtocol:(id)a5;

@end
