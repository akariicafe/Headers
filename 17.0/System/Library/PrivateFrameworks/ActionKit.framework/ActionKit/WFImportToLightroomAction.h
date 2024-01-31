@interface WFImportToLightroomAction : WFHandleCustomIntentAction

- (id)contentDestinationWithError:(id *)a0;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (void)initializeParameters;
- (BOOL)populatesInputFromInputParameter;
- (void)resolveSlot:(id)a0 withProcessedValue:(id)a1 parameter:(id)a2 input:(id)a3 completion:(id /* block */)a4;

@end
