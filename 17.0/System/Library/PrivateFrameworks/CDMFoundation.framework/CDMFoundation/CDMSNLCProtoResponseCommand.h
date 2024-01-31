@class NSArray, SIRINLUINTERNALITFMITFMParserResponse;

@interface CDMSNLCProtoResponseCommand : CDMBaseCommand

@property int classLabel;
@property (readonly, nonatomic) NSArray *snlcParses;
@property (readonly, nonatomic) SIRINLUINTERNALITFMITFMParserResponse *snlcResponse;
@property (readonly, nonatomic) BOOL isDelegated;

- (void).cxx_destruct;
- (id)initWithClassLabel:(int)a0 snlcParses:(id)a1 snlcResponse:(id)a2;

@end
