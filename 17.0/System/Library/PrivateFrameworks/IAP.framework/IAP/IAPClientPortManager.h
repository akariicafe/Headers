@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface IAPClientPortManager : NSObject {
    NSMutableDictionary *_portList;
    NSObject<OS_dispatch_queue> *_portListQueue;
    BOOL _iaptransportdIsRunning;
    NSObject<OS_xpc_object> *_iaptransportdXPCConnection;
}

@property (nonatomic) BOOL iaptransportdIsRunning;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (int)forwardAccessoryDataToIAP:(id)a0 data:(const char *)a1 length:(unsigned short)a2;
- (void)reRegisterHandlers;
- (int)registerSendDataHandler:(id)a0 queue:(id)a1 sendBlock:(id /* block */)a2;
- (void)sendData:(id)a0 data:(char *)a1 length:(unsigned short)a2;
- (int)unregisterSendDataHandler:(id)a0;

@end
