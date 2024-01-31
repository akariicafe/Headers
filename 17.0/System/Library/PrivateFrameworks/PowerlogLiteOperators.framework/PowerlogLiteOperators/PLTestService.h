@class PLXPCResponderOperatorComposition;

@interface PLTestService : PLService

@property (retain) PLXPCResponderOperatorComposition *presubmissionTestResponder;

+ (void)load;

- (id)init;
- (void)initOperatorDependancies;
- (id)presubmissionTest_testEPLMode:(id)a0 withParam:(id)a1;
- (void).cxx_destruct;

@end
