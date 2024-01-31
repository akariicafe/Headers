@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface AVConferenceXPCServer : NSObject {
    NSMutableArray *clientConnections;
    NSObject<OS_dispatch_queue> *incomingMessageQueue;
    NSObject<OS_dispatch_queue> *outgoingMessageQueue;
    NSObject<OS_dispatch_queue> *clientConnectionsQueue;
}

@property (readonly) NSObject<OS_xpc_object> *listener;
@property (readonly) NSMutableDictionary *registeredBlocks;

+ (id)AVConferenceXPCServerSingleton;
+ (BOOL)clientWithToken:(struct { unsigned int x0[8]; })a0 hasEntitlement:(id)a1;

- (id)allocWithZone:(struct _NSZone { } *)a0;
- (id)retain;
- (id)authorizedTokenData;
- (void)appendPIDToDictionary:(id)a0 pid:(int)a1;
- (void)_xpc_start_listening_for_connections;
- (void)_xpc_remove_connection_from_list:(id)a0;
- (void)_xpc_add_connection_to_list:(id)a0;
- (id)init;
- (void)registerBlockForService:(const char *)a0 block:(id /* block */)a1;
- (void)dealloc;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 xpcArguments:(id)a2 context:(id)a3;
- (unsigned long long)retainCount;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 context:(id)a2;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1 toAllClientsWithContext:(id)a2;
- (id)newClientDiedDictionary;
- (id)_xpc_get_connections_from_list_for_context:(id)a0;
- (id)autorelease;
- (void)registerBlockForService:(const char *)a0 block:(id /* block */)a1 queue:(id)a2 eventLogLevel:(int)a3;
- (id)newNSDictionaryFromXPCDictionary:(id)a0;
- (id)newNSDictionaryWidthNSDictionary:(id)a0;
- (id)_xpc_get_connection_from_list_for_connection:(id)a0;
- (void)deregisterFromService:(const char *)a0;
- (void)registerBlockForService:(const char *)a0 block:(id /* block */)a1 queue:(id)a2;
- (id)newXPCDictionaryFromNSDictionary:(id)a0 forEvent:(id)a1;
- (id)_xpc_get_connection_from_list_for_context:(id)a0;
- (void)_xpc_remove_connections_from_list;
- (void)appendContextToDictionary:(id)a0 forConnection:(id)a1;
- (void)_xpc_handle_incoming_request:(id)a0;
- (id)newNSErrorFromNSDictionary:(id)a0;
- (void)sendMessageAsync:(char *)a0 arguments:(id)a1;
- (oneway void)release;
- (id)newNSDictionaryFromNSError:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
