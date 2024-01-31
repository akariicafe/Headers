@class NSArray, GEODaemon;

@interface GEOServer : NSObject

@property (class, readonly, nonatomic) NSArray *possibleXPCActivityIdentifiers;
@property (class, readonly, nonatomic) BOOL wantsPerMessageSignposts;

@property (readonly, weak, nonatomic) GEODaemon *daemon;

+ (id)identifier;
+ (unsigned long long)launchMode;
+ (BOOL)messageSupportsOffline:(id)a0;
+ (Class)peerClass;

- (id)initWithDaemon:(id)a0;
- (void)peerDidConnect:(id)a0;
- (id)init;
- (BOOL)handleIncomingMessage:(id)a0 withObject:(id)a1 fromPeer:(id)a2;
- (void)runXPCActivity:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)peerDidDisconnect:(id)a0;

@end
