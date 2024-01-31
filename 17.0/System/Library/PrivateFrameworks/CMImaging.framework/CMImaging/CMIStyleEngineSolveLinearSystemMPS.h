@class NSArray;

@interface CMIStyleEngineSolveLinearSystemMPS : CMIStyleEngineSolveLinearSystem {
    NSArray *_inputLHS;
    NSArray *_inputRHS;
    NSArray *_inputSolution;
    NSArray *_inputStatus;
}

- (void).cxx_destruct;
- (void)setInputStatus:(id)a0;
- (id)initWithMetalContext:(id)a0 lhsSize:(unsigned int)a1 rhsSize:(unsigned int)a2;
- (id)inputLHS;
- (id)inputRHS;
- (id)inputSolution;
- (id)inputStatus;
- (void)setInputLHS:(id)a0;
- (void)setInputRHS:(id)a0;
- (void)setInputSolution:(id)a0;
- (int)solveLinearSystem:(id)a0;

@end
