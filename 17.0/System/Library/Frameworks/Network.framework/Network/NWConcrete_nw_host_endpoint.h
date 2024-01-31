@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface NWConcrete_nw_host_endpoint : NWConcrete_nw_endpoint <OS_nw_host_endpoint> {
    char *hostname;
    unsigned short port;
    unsigned short priority;
    unsigned short weight;
    NSObject<OS_dispatch_data> *ech_config;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyDictionary;
- (void)setWeight:(unsigned short)a0;
- (unsigned long long)getHash;
- (unsigned short)weight;
- (void)dealloc;
- (const char *)hostname;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (unsigned short)priority;
- (const char *)domainForPolicy;
- (void)setPriority:(unsigned short)a0;
- (id)echConfig;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (void)setEchConfig:(id)a0;
- (void).cxx_destruct;
- (unsigned short)port;
- (unsigned int)type;

@end
