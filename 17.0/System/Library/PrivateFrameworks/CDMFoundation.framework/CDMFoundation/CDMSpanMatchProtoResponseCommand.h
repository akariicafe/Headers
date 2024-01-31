@class SIRINLUINTERNALSPANMATCHSpanMatchResponse, NSArray;

@interface CDMSpanMatchProtoResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALSPANMATCHSpanMatchResponse *spanMatchResponse;
@property (readonly, nonatomic) NSArray *matchingSpansForExternalParsers;
@property (readonly, nonatomic) NSArray *matchingSpansForNL;

- (id)initWithResponse:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
