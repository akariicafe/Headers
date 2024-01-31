@class NSMutableArray, DMCHangDetectionQueue;

@interface DMCEnrollmentFlowControllerBase : NSObject

@property (retain, nonatomic) DMCHangDetectionQueue *workerQueue;
@property (nonatomic) unsigned long long currentStep;
@property (nonatomic) unsigned long long nextStepIndex;
@property (retain, nonatomic) NSMutableArray *stepQueue;

- (void)_pollNextStep;
- (void)_appendSteps:(id)a0;
- (void)_workerQueue_flowCompleted;
- (void)_workerQueue_performFlowStep:(unsigned long long)a0;
- (void)_resetToInitialSteps;
- (id)init;
- (void).cxx_destruct;

@end
