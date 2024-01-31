@class NSString, NWConcrete_nw_interface, NSObject;
@protocol OS_dispatch_data, OS_nw_endpoint;

@interface NWConcrete_nw_interface_option_details : NSObject <OS_nw_interface_option_details> {
    NWConcrete_nw_interface *interface;
    unsigned char nexus_agent[16];
    NSObject<OS_nw_endpoint> *remote_endpoint;
    char priority;
    NSObject<OS_dispatch_data> *local_cid;
    NSObject<OS_dispatch_data> *remote_cid;
    NSObject<OS_dispatch_data> *initial_data;
    int sockfd;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
