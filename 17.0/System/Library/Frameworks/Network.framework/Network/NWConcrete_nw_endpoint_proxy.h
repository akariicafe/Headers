@class NSString, NWConcrete_nw_endpoint_handler, NSObject;
@protocol OS_nw_array, OS_nw_error;

@interface NWConcrete_nw_endpoint_proxy : NSObject <OS_nw_endpoint_proxy> {
    NSObject<OS_nw_array> *child_endpoint_handlers;
    NSObject<OS_nw_array> *failed_child_endpoint_handlers;
    unsigned int next_child_endpoint_index;
    NWConcrete_nw_endpoint_handler *connected_child;
    NSObject<OS_nw_array> *custom_proxy_configs;
    NSObject<OS_nw_array> *path_proxy_configs;
    NSObject<OS_nw_array> *parsed_proxy_configs;
    struct __CFURL { } *url;
    NSObject<OS_nw_array> *pac_resolvers;
    NSObject<OS_nw_error> *child_error;
    void *child_timer;
    unsigned char has_privacy_proxy : 1;
    unsigned char privacy_proxy_fail_closed : 1;
    unsigned char privacy_proxy_fail_closed_for_unreachable_hosts : 1;
    unsigned char allow_non_privacy_proxy_children : 1;
    unsigned char privacy_proxy_detected_unreachable_host : 1;
    unsigned char direct_prohibited : 1;
    unsigned char synthesized_url : 1;
    unsigned char pac_failed_missing_url : 1;
    unsigned char overrode_to_https : 1;
    unsigned char has_pac : 1;
    unsigned char transport_finished : 1;
    unsigned char proxy_flow_finished : 1;
    unsigned char is_known_tracker : 1;
    unsigned char is_custom_proxy : 1;
    unsigned char is_pac_connection : 1;
    unsigned char is_http_scheme : 1;
    unsigned char is_https_scheme : 1;
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
