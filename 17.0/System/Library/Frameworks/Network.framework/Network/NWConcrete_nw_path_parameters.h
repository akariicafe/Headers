@class NSString, NSObject;
@protocol OS_nw_context, OS_nw_endpoint, OS_nw_protocol_options, OS_nw_interface;

@interface NWConcrete_nw_path_parameters : NSObject <OS_nw_path_parameters> {
    struct nw_parameters_process_path_value { unsigned char proc_uuid[16]; unsigned char e_proc_uuid[16]; unsigned long long delegated_upid; int pid; unsigned int uid; } process_path_value;
    struct nw_parameters_path_value { unsigned int traffic_class; int required_interface_type; int required_interface_subtype; int companion_preference; int companion_link_upgrade_preference; int companion_proxy_required_interface_type; unsigned char prohibit_expensive_paths : 1; unsigned char prohibit_constrained_paths : 1; unsigned char prohibit_roaming : 1; unsigned char allow_socket_access : 1; unsigned char only_primary_requires_type : 1; unsigned char __pad_bits : 3; } path_value;
    struct nw_parameters_joinable_path_value { unsigned char attribution; int multipath_service; unsigned char fallback_mode; unsigned char discretionary : 1; unsigned char no_proxy : 1; unsigned char no_transform : 1; unsigned char use_awdl : 1; unsigned char use_p2p : 1; unsigned char no_fallback : 1; unsigned char no_cellular_fallback : 1; unsigned char no_wake_from_sleep : 1; unsigned char prefer_no_proxy : 1; unsigned char no_proxy_path_selection : 1; unsigned char privacy_proxy_fail_closed : 1; unsigned char privacy_proxy_fail_closed_for_unreachable_hosts : 1; unsigned char prohibit_privacy_proxy : 1; unsigned char fallback_applied : 1; unsigned char proxy_applied : 1; unsigned char system_proxy : 1; unsigned char known_tracker : 1; unsigned char third_party_web_content : 1; unsigned char approved_app_domain : 1; unsigned char enhanced_privacy : 1; unsigned char web_search_content : 1; unsigned char __pad_bits : 3; } joinable_path_value;
    char *account_id;
    char *attribution_context;
    char *attributed_bundle;
    NSObject<OS_nw_context> *context;
    NSObject<OS_nw_protocol_options> *transport_options;
    NSObject<OS_nw_protocol_options> *internet_options;
    NSObject<OS_nw_endpoint> *local_address;
    NSObject<OS_nw_interface> *required_interface;
    struct nw_parameters_extended_objects { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; id x14; id x15; id x16; id x17; } *extended_objects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
