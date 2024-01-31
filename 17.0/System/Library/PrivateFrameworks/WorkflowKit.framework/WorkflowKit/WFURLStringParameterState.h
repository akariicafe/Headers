@interface WFURLStringParameterState : WFVariableStringParameterState

+ (id)forceStringToURL:(id)a0 error:(id *)a1;
+ (Class)processingValueClass;

- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
