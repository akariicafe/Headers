@class NSString;

@interface NWConcrete_nw_url_endpoint : NWConcrete_nw_endpoint <OS_nw_url_endpoint> {
    struct __CFURL { } *url_ref;
    unsigned short port;
    char *url;
    char *scheme;
    char *hostname;
    char *path;
    char *sanitized_url;
    char url_hash[9];
    unsigned char inferred_port : 1;
    unsigned char __pad_bits : 7;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
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
- (const char *)domainForPolicy;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (unsigned short)port;
- (unsigned int)type;

@end
