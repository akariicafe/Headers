@class NSString, NWConcrete_nw_endpoint_handler, NSObject;
@protocol OS_nw_resolver, OS_nw_dictionary, OS_nw_endpoint, OS_nw_array;

@interface NWConcrete_nw_endpoint_resolver : NSObject <OS_nw_endpoint_resolver> {
    NSObject<OS_nw_resolver> *resolver;
    int last_resolver_status;
    unsigned int next_child_endpoint_index;
    unsigned char transport_finished : 1;
    unsigned char failed_to_start_next_child : 1;
    unsigned char started_desperate_ivan : 1;
    unsigned char waiting_for_desperate_ivan : 1;
    NWConcrete_nw_endpoint_handler *connected_child;
    NSObject<OS_nw_array> *child_endpoint_handlers;
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;
    void *child_timer;
    void *trigger_agent_timer;
    void *desperate_ivan_timer;
    NSObject<OS_nw_dictionary> *resolve_flow_registrations;
    NSObject<OS_nw_array> *path_resolved_endpoints;
    NSObject<OS_nw_array> *resolver_resolved_endpoints;
    NSObject<OS_nw_endpoint> *modified_endpoint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)startWithHandler:(id)a0;
- (void)cancelWithHandler:(id)a0 forced:(BOOL)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updatePathWithHandler:(id)a0;
- (BOOL)applyWithHandler:(id)a0 toChildren:(id /* block */)a1;

@end
