@class NSString, NSObject;
@protocol OS_nw_advertise_descriptor, OS_nw_group_descriptor, OS_nw_channel, OS_nw_parameters, OS_nw_path, OS_nw_endpoint, OS_nw_browse_descriptor;

@interface NWConcrete_nw_agent_client : NSObject <OS_nw_agent_client> {
    unsigned char client_uuid[16];
    char log_string[8];
    NSObject<OS_nw_endpoint> *endpoint;
    NSObject<OS_nw_parameters> *parameters;
    NSObject<OS_nw_path> *path;
    NSObject<OS_nw_advertise_descriptor> *advertise_descriptor;
    NSObject<OS_nw_browse_descriptor> *browse_descriptor;
    NSObject<OS_nw_group_descriptor> *group_descriptor;
    NSObject<OS_nw_channel> *channel;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *framer_protocol;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMessage:(char *)a0 agent:(id)a1 context:(id)a2;

@end
