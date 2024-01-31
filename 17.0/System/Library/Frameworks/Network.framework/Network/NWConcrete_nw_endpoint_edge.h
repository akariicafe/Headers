@class NSString, NSObject;
@protocol OS_nw_endpoint;

@interface NWConcrete_nw_endpoint_edge : NSObject <OS_nw_endpoint_edge> {
    struct nw_protocol_identifier { char name[32]; int level; int mapping; } identifier;
    NSObject<OS_nw_endpoint> *endpoint;
    char *name;
    unsigned char wildcard : 1;
    unsigned char __pad_bits : 7;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
