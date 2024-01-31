@class SIRINLUINTERNALITFMITFMParserRequest, SIRINLUEXTERNALRewriteMessage, NSMutableArray;

@interface CDMLVCRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALITFMITFMParserRequest *parserRequest;
@property (readonly, nonatomic) SIRINLUEXTERNALRewriteMessage *rewriteMsg;
@property (readonly, nonatomic) NSMutableArray *overridesInputs;

- (void).cxx_destruct;
- (id)initWithParserRequest:(id)a0 rewriteMsg:(id)a1 overridesInputs:(id)a2;

@end
