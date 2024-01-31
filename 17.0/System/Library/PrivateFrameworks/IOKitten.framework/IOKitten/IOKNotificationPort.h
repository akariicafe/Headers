@class NSObject;
@protocol OS_dispatch_queue;

@interface IOKNotificationPort : NSObject

@property (readonly, nonatomic) struct IONotificationPort { } *port;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) unsigned int machPort;

- (id)init;
- (void)dealloc;
- (id)initWithMasterPort:(unsigned int)a0 onDispatchQueue:(id)a1;
- (void).cxx_destruct;
- (id)initOnDispatchQueue:(id)a0;

@end
