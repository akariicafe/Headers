@class NSUUID, NWParameters, NENexusFlowManager, NWEndpoint;

@interface NENexusFlow : NSObject {
    NSUUID *_nexusInstance;
    NENexusFlowManager *_manager;
}

@property (nonatomic) struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *protocol;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NWEndpoint *endpoint;
@property (readonly, nonatomic) NWParameters *parameters;
@property (readonly, nonatomic) NSUUID *clientIdentifier;

- (void)dealloc;
- (void).cxx_destruct;

@end
