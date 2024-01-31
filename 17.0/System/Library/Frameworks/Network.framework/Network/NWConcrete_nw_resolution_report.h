@class NSString, NSObject;
@protocol OS_nw_array, OS_nw_endpoint;

@interface NWConcrete_nw_resolution_report : NSObject <OS_nw_resolution_report> {
    unsigned long long milliseconds;
    char *provider_name;
    char *extended_dns_error_extra_text;
    NSObject<OS_nw_endpoint> *successful_endpoint;
    NSObject<OS_nw_endpoint> *preferred_endpoint;
    NSObject<OS_nw_array> *resolved_endpoints;
    unsigned int endpoint_count;
    int source;
    int protocol;
    unsigned short extended_dns_error_code;
    unsigned char received_svcb : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
