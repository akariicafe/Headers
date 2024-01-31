@class NSString, NWConcrete_nw_endpoint_handler, NSObject;
@protocol OS_nw_interface;

@interface NWConcrete_nw_endpoint_fallback : NSObject <OS_nw_endpoint_fallback> {
    unsigned long long fallback_usage_cap;
    unsigned long long fallback_cap_interval;
    unsigned long long fallback_timeout_nanos;
    NWConcrete_nw_endpoint_handler *primary_child;
    NWConcrete_nw_endpoint_handler *fallback_child;
    int result;
    NSObject<OS_nw_interface> *primary_interface;
    NSObject<OS_nw_interface> *fallback_interface;
    void *fallback_timer;
    void *post_transport_timer;
    void *usage_cap_timer;
    unsigned long long fallback_timer_start;
    unsigned int fallback_disposition;
    unsigned char received_primary_cancelled_error : 1;
    unsigned char weak_fallback : 1;
    unsigned char no_fallback_timer : 1;
    unsigned char fallback_is_forced : 1;
    unsigned char fallback_is_preferred : 1;
    unsigned char fallback_based_on_interface_type : 1;
    unsigned char started_fallback : 1;
    unsigned char primary_child_in_progress : 1;
    unsigned char fallback_child_in_progress : 1;
    unsigned char primary_child_indefinite_failed : 1;
    unsigned char fallback_child_indefinite_failed : 1;
    unsigned char fallback_is_cellular : 1;
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
