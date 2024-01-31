@class NSString, NSArray, NWConcrete_nw_connection, NSObject;
@protocol OS_xpc_object, OS_nw_advertise_descriptor, OS_nw_group_descriptor, OS_nw_context, OS_nw_parameters, OS_nw_array, OS_dispatch_queue, OS_nw_endpoint, OS_nw_error, OS_nw_path_evaluator, OS_nw_path;

@interface NWConcrete_nw_listener : NSObject <nw_listener_inbox_delegate, OS_nw_listener> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_group_descriptor> *multicast_descriptor;
    unsigned short id_value;
    char id_str[6];
    NWConcrete_nw_connection *join_connection;
    char *launchd_key;
    NSObject<OS_dispatch_queue> *client_queue;
    unsigned int client_qos_class;
    id /* block */ event_handler;
    id /* block */ new_connection_handler;
    id /* block */ new_connection_group_handler;
    unsigned int new_connection_limit;
    id /* block */ new_packet_handler;
    id /* block */ advertised_endpoint_changed_handler;
    int state;
    NSObject<OS_nw_error> *last_error;
    NSObject<OS_nw_array> *inboxes;
    NSObject<OS_nw_array> *flow_registrations;
    NSObject<OS_nw_path_evaluator> *evaluator;
    NSObject<OS_nw_path> *path;
    NSObject<OS_xpc_object> *inactive_agents;
    NSObject<OS_xpc_object> *inactive_agent_dictionaries;
    NSObject<OS_xpc_object> *triggered_agents;
    NSObject<OS_nw_parameters> *current_derived_parameters;
    NSArray *authorized_keys;
    NSObject<OS_nw_array> *ids_info;
    char *device_id;
    unsigned short awdl_use_count;
    void *advertise_new_connection_timer;
    NWConcrete_nw_listener *internally_retained_object;
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;
    NSArray *advertisers;
    NSObject<OS_nw_endpoint> *advertised_endpoint;
    NSObject<OS_nw_endpoint> *local_endpoint;
    unsigned int defer_socket;
    unsigned short port;
    unsigned char cancelling : 1;
    unsigned char reported_state : 1;
    unsigned char allow_new_connection_inline : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)handleInboundPacket:(const char *)a0 length:(unsigned short)a1 from:(id)a2 to:(id)a3 interface:(id)a4 socket:(id)a5;
- (void)handleInboxCancelComplete:(id)a0;
- (void)handleInbound:(id)a0 addProtocolInbox:(BOOL)a1;
- (void)updateParametersForNewConnection:(id)a0;
- (BOOL)canHandleNewConnection:(id)a0;
- (void).cxx_destruct;
- (void)handleInboxFailed:(id)a0 error:(id)a1;
- (char *)getPeerDeviceID;
- (id)getIDSInformation;

@end
