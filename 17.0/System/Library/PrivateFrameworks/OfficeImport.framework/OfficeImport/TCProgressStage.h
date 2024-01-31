@class NSString, TCProgressContext;

@interface TCProgressStage : NSObject {
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    NSString *m_name;
    TCProgressStage *m_parentStage;
    TCProgressContext *m_context;
}

- (void)dealloc;
- (void)end;
- (void)setProgress:(double)a0;
- (void).cxx_destruct;
- (double)currentPosition;
- (void)advanceProgress:(double)a0;
- (id)initRootStageInContext:(id)a0;
- (id)parentStage;
- (id)initBranchWithSteps:(double)a0 takingSteps:(double)a1 name:(id)a2 inContext:(id)a3;
- (id)initWithSteps:(double)a0 takingSteps:(double)a1 name:(id)a2 inContext:(id)a3;

@end
