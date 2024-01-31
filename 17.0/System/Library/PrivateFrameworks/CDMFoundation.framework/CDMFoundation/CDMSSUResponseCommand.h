@class SIRINLUINTERNALSSUSSUResponse;

@interface CDMSSUResponseCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALSSUSSUResponse *ssuResponse;

- (void).cxx_destruct;
- (id)initWithCmdError:(id)a0;
- (id)initWithSSUResponse:(id)a0;
- (id)initWithSSUResponse:(id)a0 cmdError:(id)a1;

@end
