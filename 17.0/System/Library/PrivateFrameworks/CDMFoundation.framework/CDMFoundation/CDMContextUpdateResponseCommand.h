@class SIRINLUEXTERNALCorrectionOutcome, SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse, SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle;

@interface CDMContextUpdateResponseCommand : CDMBaseCommand

@property (retain, nonatomic) SIRINLUINTERNALCONTEXTUPDATEContextUpdateResponse *ctxUpdateResponse;
@property (retain, nonatomic) SIRINLUINTERNALCONTEXTUPDATEReformedTurnInputBundle *firstReformedInput;
@property (retain, nonatomic) SIRINLUEXTERNALCorrectionOutcome *correctionOutcome;

- (void).cxx_destruct;
- (id)initWithCtxUpdateResponse:(id)a0;

@end
