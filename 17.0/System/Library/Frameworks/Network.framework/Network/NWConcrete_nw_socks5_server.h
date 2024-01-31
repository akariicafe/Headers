@class NSString, NSObject;
@protocol OS_nw_array, OS_nw_dictionary, OS_nw_parameters, OS_dispatch_source, OS_dispatch_queue, OS_nw_listener;

@interface NWConcrete_nw_socks5_server : NSObject <OS_nw_socks5_server> {
    unsigned long long ss_id;
    NWConcrete_nw_socks5_server *ss_internally_retained_object;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ss_lock;
    NSObject<OS_dispatch_queue> *ss_queue;
    NSObject<OS_nw_parameters> *ss_parameters;
    NSObject<OS_dispatch_queue> *ss_client_queue;
    id /* block */ ss_state_handler;
    id /* block */ ss_error;
    NSObject<OS_nw_listener> *ss_listener;
    NSObject<OS_nw_array> *ss_socks5_connections;
    NSObject<OS_nw_dictionary> *ss_socks5_udp_associate_connections;
    struct nw_shoes_statistics { unsigned int ss_max_simultaneous_connections; unsigned int ss_total_connections; } ss_stats;
    unsigned long long ss_assertion_toggle_mach_time;
    NSObject<OS_dispatch_source> *ss_assertion_timer;
    unsigned int ss_assertion;
    unsigned int ss_busy_count;
    unsigned char ss_shoes : 1;
    unsigned char ss_assertion_timer_running : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
