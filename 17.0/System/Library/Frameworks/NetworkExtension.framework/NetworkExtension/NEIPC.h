@class NSObject;
@protocol OS_xpc_object;

@interface NEIPC : NSObject {
    id /* block */ _messageHandler;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_listener;
}

- (void).cxx_destruct;

@end
