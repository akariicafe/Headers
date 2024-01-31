@class HMXPCServerInternal;

@interface HMXPCServer : NSObject

@property (readonly, nonatomic) HMXPCServerInternal *xpcServer;

- (void)start;
- (id)initWithStoreURL:(id)a0;
- (void).cxx_destruct;

@end
