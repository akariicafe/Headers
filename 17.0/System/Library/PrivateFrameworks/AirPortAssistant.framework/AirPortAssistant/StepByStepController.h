@class NSDictionary;

@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult> {
    struct StepByStepContext { } *_stepByStepContext;
}

@property id delegate;
@property (retain) NSDictionary *restoreRecommendation;

+ (id)stepByStepController;

- (id)init;
- (void)dealloc;
- (int)resume;
- (int)cancelStepByStep;
- (int)setupFromAutoguessRecommendation:(id)a0 withOptions:(id)a1;
- (void)stepByStepNextStepResult:(int)a0 withOptions:(id)a1;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext { unsigned int x0; struct AssistantContext *x1; int x2; struct __CFDictionary *x3; int x4; id x5; id x6; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x7; void *x8; long long x9; } *)a0;

@end
