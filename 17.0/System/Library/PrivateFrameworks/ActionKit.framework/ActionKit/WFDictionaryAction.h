@interface WFDictionaryAction : WFAction

- (id)minimumSupportedClientVersion;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (BOOL)hasReplacedArrayOrDictionaryWithVariable;
- (BOOL)hasReplacedArrayOrDictionaryWithVariableInState:(id)a0;

@end
