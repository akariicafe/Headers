@class NSObject;
@protocol OS_xpc_object;

@interface RemoteDeviceManager : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

- (id)init;
- (void)dealloc;
- (void)disconnectDevice:(id)a0;
- (void)sendMessage:(const char *)a0 args:(id)a1;

@end
