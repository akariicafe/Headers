@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface NWConcrete_nw_address_endpoint : NWConcrete_nw_endpoint <OS_nw_address_endpoint> {
    struct sockaddr_storage { unsigned char ss_len; unsigned char ss_family; char __ss_pad1[6]; long long __ss_align; char __ss_pad2[112]; } address;
    struct ether_addr { unsigned char octet[6]; } ethernet_address;
    NSObject<OS_dispatch_data> *ech_config;
    char *hostname;
    int original_fd;
    unsigned short priority;
    unsigned char calculated_hostname : 1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyDictionary;
- (unsigned long long)getHash;
- (void)dealloc;
- (const char *)hostname;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (unsigned short)priority;
- (void)setPriority:(unsigned short)a0;
- (id)echConfig;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (void)setEchConfig:(id)a0;
- (void).cxx_destruct;
- (unsigned short)port;
- (unsigned int)type;

@end
