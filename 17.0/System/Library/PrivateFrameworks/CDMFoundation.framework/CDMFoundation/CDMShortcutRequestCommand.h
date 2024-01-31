@class NSArray, SIRINLUEXTERNALTurnContext, SIRINLUINTERNALTokenChain;

@interface CDMShortcutRequestCommand : CDMBaseCommand

@property (readonly, nonatomic) SIRINLUINTERNALTokenChain *tokenChain;
@property (readonly, nonatomic) NSArray *matchingSpans;
@property (readonly, nonatomic) SIRINLUEXTERNALTurnContext *currentTurnContext;

- (void).cxx_destruct;
- (id)initWithMatchingSpans:(id)a0 tokenChain:(id)a1 currentTurnContext:(id)a2;

@end
