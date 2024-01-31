@interface WFFiniteRepeatAction : WFRepeatAction {
    unsigned long long _numberOfLoops;
}

- (unsigned long long)numberOfLoops;
- (BOOL)shouldRepeatWithVariableSource:(id)a0;
- (id)outputVariableWithVariableProvider:(id)a0 UUIDProvider:(id)a1;
- (id)repeatCountVariableName;
- (long long)repeatCountWithVariableSource:(id)a0;
- (id)repeatInputVariableName;
- (id)repeatInputWithVariableSource:(id)a0;
- (void)resetEvaluationCriteriaWithVariableSource:(id)a0;
- (void)runWithInput:(id)a0 error:(id *)a1;
- (void)runWithInput:(id)a0 userInterface:(id)a1 runningDelegate:(id)a2 variableSource:(id)a3 workQueue:(id)a4 completionHandler:(id /* block */)a5;
- (void)setRepeatCount:(long long)a0 withVariableSource:(id)a1;
- (void)setRepeatInput:(id)a0 withVariableSource:(id)a1;

@end
