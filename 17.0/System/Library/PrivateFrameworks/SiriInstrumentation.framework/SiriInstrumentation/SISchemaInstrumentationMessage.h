@interface SISchemaInstrumentationMessage : PBCodable

- (id)qualifiedMessageName;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (void)unwrapMessageWithCompletion:(id /* block */)a0;
- (id)formattedJsonBody;
- (id)_pruneSuppressedMessagesFromArray:(id)a0 underConditions:(id)a1;
- (BOOL)shouldSuppressMessageUnderConditions:(id)a0;

@end
