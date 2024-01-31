@class NSString, NSObject;
@protocol OS_dnssd_getaddrinfo, OS_dispatch_data, OS_nw_endpoint;

@interface NWConcrete_nw_resolver_service : NSObject <OS_nw_resolver_service> {
    NSObject<OS_nw_endpoint> *service_host;
    NSObject<OS_nw_endpoint> *alternative_origin;
    NSObject<OS_dnssd_getaddrinfo> *gai;
    unsigned short priority;
    unsigned short port;
    unsigned short flags;
    NSObject<OS_dispatch_data> *ech_config;
    unsigned char sensitive_redacted : 1;
    unsigned char host_matches_origin : 1;
    unsigned char port_matches_origin : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
