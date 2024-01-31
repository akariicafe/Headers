@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCXPCClientShared : AVConferenceXPCClient

@property (readonly, nonatomic) NSMutableDictionary *registeredUUIDServiceBlocks;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *registeredBlocksQueue;

- (id)init;
- (void)dealloc;
- (void)deregisterFromNotifications;
- (void)deregisterWithUUID:(id)a0 service:(char *)a1;
- (void)registerBlockWithUUID:(id)a0 service:(char *)a1 block:(id /* block */)a2;

@end
