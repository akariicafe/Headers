@class NSArray, NLXSchemaNLXClientEventMetadata;

@interface CDMSpanMatchProtoRequestCommand : CDMBaseCommand

@property (retain, nonatomic) NSArray *spanMatchRequests;
@property (retain, nonatomic) NSArray *asrHypothesis;
@property (retain, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)initWithRequests:(id)a0 asrHypothesis:(id)a1;
- (id)initWithRequests:(id)a0;
- (id)initWithRequests:(id)a0 asrHypothesis:(id)a1 selfMetadata:(id)a2;
- (id)initWithRequests:(id)a0 selfMetadata:(id)a1;

@end
