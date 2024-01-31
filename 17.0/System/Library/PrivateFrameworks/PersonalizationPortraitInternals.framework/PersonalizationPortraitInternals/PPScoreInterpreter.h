@class PPScoreInterpreterBytecode, PPBaseScoreInputSet, _PASLock;

@interface PPScoreInterpreter : NSObject {
    PPScoreInterpreterBytecode *_bytecode;
    PPBaseScoreInputSet *_scoreInputSet;
    _PASLock *_reusableContext;
}

+ (id)scoreInterpreterFromAsset:(id)a0;
+ (id)scoreInterpreterFromFactorName:(id)a0 namespaceName:(id)a1;

- (id)init;
- (id)initWithBytecode:(id)a0;
- (id)initWithBytecode:(id)a0 scoreInputSet:(id)a1;
- (void)evaluateWithPreviousStageSubscores:(id)a0 scoreInputInitializationBlock:(id /* block */)a1 scoreInputAssignmentBlock:(id /* block */)a2 outputBlock:(id /* block */)a3;
- (id)evaluateWithScoreInputs:(id)a0 previousSubscores:(id)a1;
- (id)initWithParseRoot:(id)a0 scalarSubscoreCount:(unsigned long long)a1 arraySubscoreCount:(unsigned long long)a2 objectSubscoreCount:(unsigned long long)a3;
- (id)evaluateWithScoreInputs:(id)a0;
- (void).cxx_destruct;
- (void)cleanupReusableComponents;

@end
