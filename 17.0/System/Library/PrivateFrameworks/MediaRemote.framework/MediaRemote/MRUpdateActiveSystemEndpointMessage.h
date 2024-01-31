@class MRUpdateActiveSystemEndpointRequest;

@interface MRUpdateActiveSystemEndpointMessage : MRProtocolMessage

@property (readonly, nonatomic) MRUpdateActiveSystemEndpointRequest *request;

- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)type;

@end
