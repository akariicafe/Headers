@class NSString, NSObject;
@protocol OS_dispatch_data, OS_nw_array;

@interface NWConcrete_nw_browse_descriptor : NSObject <OS_nw_browse_descriptor> {
    int type;
    char *bonjour_type;
    char *bonjour_domain;
    char *description;
    char *logging_description;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
    NSObject<OS_dispatch_data> *custom_data;
    id /* block */ browse_block;
    char *application_service_name;
    char *bundle_id;
    unsigned int device_types;
    unsigned int scope;
    NSObject<OS_nw_array> *device_filters;
    unsigned char include_txt_record : 1;
    unsigned char sign_results : 1;
    unsigned char discover_application_service_endpoints_only : 1;
    unsigned char __pad_bits : 5;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)redactedDescription;
- (void).cxx_destruct;

@end
