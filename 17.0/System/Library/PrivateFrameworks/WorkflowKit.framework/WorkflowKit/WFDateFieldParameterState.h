@class NSDate;

@interface WFDateFieldParameterState : WFVariableStringParameterState

@property (retain, nonatomic) NSDate *preprocessedDate;

+ (id)processingValueClasses;

- (void).cxx_destruct;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;

@end
