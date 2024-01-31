@class SSXPCConnection, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SSErrorHandlerSession : NSObject {
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDictionary *_properties;
    long long _sessionID;
}

- (id)init;
- (void)dealloc;
- (id)valueForProperty:(id)a0;
- (void)retry;
- (void)_setControlConnection:(id)a0;
- (void)_setErrorProperties:(id)a0;
- (void)_setSessionID:(long long)a0;
- (void)performDefaultHandling;
- (void)redirectToURL:(id)a0;

@end
