@class NSString, NSObject;
@protocol OS_nw_protocol_options, OS_nw_array;

@interface NWConcrete_nw_protocol_stack : NSObject <OS_nw_protocol_stack> {
    NSObject<OS_nw_array> *persistent_application_protocols;
    NSObject<OS_nw_array> *application_protocols;
    NSObject<OS_nw_protocol_options> *transport_protocol;
    NSObject<OS_nw_protocol_options> *secondary_transport_protocol;
    NSObject<OS_nw_protocol_options> *original_proxied_transport_protocol;
    NSObject<OS_nw_protocol_options> *internet_protocol;
    NSObject<OS_nw_protocol_options> *link_protocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
