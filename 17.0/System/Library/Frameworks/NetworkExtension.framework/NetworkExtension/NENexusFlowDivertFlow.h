@class NSUUID, NWEndpoint, NWParameters;

@interface NENexusFlowDivertFlow : NENexusFlow {
    NSUUID *_clientID;
    NWEndpoint *_internalEndpoint;
    NWParameters *_internalParameters;
    struct _NEFlow { } *_flowDivertFlow;
}

- (void)dealloc;
- (id)parameters;
- (void).cxx_destruct;
- (id)endpoint;
- (id)clientIdentifier;

@end
