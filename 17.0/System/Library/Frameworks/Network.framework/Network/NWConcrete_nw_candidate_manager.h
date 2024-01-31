@class NSString, NSMutableDictionary, NSObject, NWConcrete_nw_connection;
@protocol OS_nw_resolver, OS_nw_path_flow_registration, OS_nw_listener, OS_nw_endpoint, OS_nw_array, OS_nw_parameters, OS_nw_path_evaluator, OS_nw_ids_info;

@interface NWConcrete_nw_candidate_manager : NSObject <OS_nw_candidate_manager> {
    unsigned long long log_id;
    NSObject<OS_nw_endpoint> *service;
    NSObject<OS_nw_ids_info> *ids_info;
    NSObject<OS_nw_resolver> *service_resolver;
    NSObject<OS_nw_resolver> *awdl_service_resolver;
    NSObject<OS_nw_endpoint> *awdl_endpoint;
    NSObject<OS_nw_listener> *listener;
    NSObject<OS_nw_parameters> *parameters;
    NSMutableDictionary *hostname_resolvers;
    void *delay_timer;
    NSObject<OS_nw_endpoint> *original_remote_endpoint;
    id /* block */ add_eligible_details;
    id /* block */ remove_eligible_details;
    id /* block */ modify_ids_parameters;
    NWConcrete_nw_connection *connection;
    NSObject<OS_nw_array> *candidates;
    int state;
    id /* block */ state_handler;
    id /* block */ new_connection_handler;
    NSObject<OS_nw_path_evaluator> *ids_path_evaluator;
    NSObject<OS_nw_path_flow_registration> *ids_flow_registration;
    unsigned char currently_using_awdl : 1;
    unsigned char started_injecting : 1;
    unsigned char started_ids_injecting : 1;
    unsigned char should_connect : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init:(id)a0;
- (void).cxx_destruct;

@end
