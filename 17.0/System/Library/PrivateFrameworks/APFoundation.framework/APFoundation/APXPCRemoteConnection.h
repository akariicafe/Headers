@class NSString, NSXPCConnection, APUnfairLock, NSMutableArray;

@interface APXPCRemoteConnection : NSObject

@property (nonatomic) int numClients;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSString *machService;
@property (readonly, nonatomic) APUnfairLock *unfairLock;

+ (id)connectionForMachService:(id)a0;
+ (id)sharedConnectionFor:(id)a0;
+ (id)sharedConnections;
+ (id)connectionFor:(id)a0;
+ (void)removeSharedConnectionForMachService:(id)a0;
+ (void)addSharedConnection:(id)a0 forMachService:(id)a1;

- (void)connectionInterrupted;
- (void)dealloc;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (void)connectionInvalidated;
- (void)increaseConnectionCount;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidateForDelegate:(id)a0;
- (void)decreaseConnectionCount;

@end
