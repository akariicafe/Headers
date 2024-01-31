@class NWConcrete_nw_connection, NSString, NSObject;
@protocol OS_nw_path_evaluator, OS_nw_establishment_report, OS_nw_socks5_server, OS_dispatch_queue, OS_nw_error;

@interface NWConcrete_nw_socks5_connection : NSObject <OS_nw_socks5_connection> {
    unsigned long long sc_id;
    NWConcrete_nw_socks5_connection *sc_internally_retained_object;
    NSObject<OS_nw_socks5_server> *sc_parent;
    NWConcrete_nw_connection *sc_in_connection;
    NSObject<OS_dispatch_queue> *sc_queue;
    id /* block */ sc_cancel;
    unsigned char sc_state;
    unsigned char sc_out_address_type;
    NSObject<OS_nw_path_evaluator> *sc_prefer_wifi_path_evaluator;
    int sc_prefer_wifi_previous_path_status;
    void *sc_udp_associate_verification_source;
    unsigned int sc_udp_associate_verification_count;
    union { char *byte_pointer; struct in_addr *ipv4_addr; struct in6_addr *ipv6_addr; char *domain; } sc_out_address;
    unsigned short sc_shoes_request_length_hbo;
    unsigned char sc_out_address_domain_length;
    unsigned long long sc_busy_counter;
    unsigned long long sc_busy_start_time_nanos;
    unsigned long long sc_total_busy_time_nanos;
    unsigned long long sc_start_time_nanos;
    NWConcrete_nw_connection *sc_out_connection;
    NSObject<OS_nw_error> *sc_error;
    unsigned char sc_out_connection_failed_or_sent_write_close : 1;
    unsigned char sc_in_connection_failed_or_sent_write_close : 1;
    unsigned char sc_out_disable_proxy : 1;
    unsigned char sc_sent_reply : 1;
    unsigned char sc_has_read_from_in_connection : 1;
    unsigned char sc_out_udp : 1;
    unsigned char sc_should_prefer_wifi : 1;
    unsigned char sc_is_udp_associate : 1;
    unsigned char sc_processed_udp_associate_request : 1;
    unsigned char sc_in_connection_send_connected_endpoint : 1;
    unsigned char sc_in_connection_send_resolved_endpoint : 1;
    NWConcrete_nw_connection *sc_in_udp_associated_tcp_connection;
    NSObject<OS_nw_establishment_report> *sc_out_establishment_report;
    unsigned long long sc_out_connection_bytes_read;
    unsigned long long sc_out_connection_bytes_written;
    unsigned long long sc_in_connection_bytes_read;
    unsigned long long sc_in_connection_bytes_written;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;

@end
