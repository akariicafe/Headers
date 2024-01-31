@class OS_remote_service, OS_remote_device, NSObject, OS_xpc_remote_connection;
@protocol OS_dispatch_queue;

@interface CryptexRemoteService : NSObject {
    OS_remote_service *service;
    OS_xpc_remote_connection *connection;
}

@property (readonly, nonatomic) OS_remote_device *device;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *client_queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internal_queue;
@property (readonly, nonatomic) unsigned long long flags;

- (void)dealloc;
- (void).cxx_destruct;
- (int)initService;
- (id)initWithDevice:(id)a0 queue:(id)a1 flags:(unsigned long long)a2;
- (id)remote_conn;
- (int)sendRequestSync:(id)a0 response:(id *)a1;

@end
