@class HKWorkoutBuilder;

@interface WFLogWorkoutAction : WFAction

@property (retain, nonatomic) HKWorkoutBuilder *builder;
@property unsigned long long currentState;

- (id)appIdentifier;
- (void).cxx_destruct;
- (void)addSamples:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (void)beginCollection:(id)a0;
- (void)endCollection:(id)a0;
- (void)finishWorkout:(id)a0;
- (id)localizedSmartPromptUsageSentenceWithcontentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)logWorkoutContinue:(id)a0;
- (void)resourceAvailabilityChanged;

@end
