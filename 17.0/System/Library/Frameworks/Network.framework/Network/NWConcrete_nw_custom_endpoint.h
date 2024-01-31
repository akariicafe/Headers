@class NSString, NSObject;
@protocol OS_dispatch_data;

@interface NWConcrete_nw_custom_endpoint : NWConcrete_nw_endpoint <OS_nw_custom_endpoint> {
    NSObject<OS_dispatch_data> *data;
    id /* block */ resolver_block;
    unsigned int type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyDictionary;
- (unsigned long long)getHash;
- (BOOL)isEqualToEndpoint:(id)a0 matchFlags:(unsigned char)a1;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned int)type;

@end
