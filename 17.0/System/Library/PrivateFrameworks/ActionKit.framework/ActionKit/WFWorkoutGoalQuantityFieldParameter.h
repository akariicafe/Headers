@class NSString, NSArray, WFAction;

@interface WFWorkoutGoalQuantityFieldParameter : WFQuantityFieldParameter <WFActionEventObserver> {
    NSArray *_possibleUnits;
    id _defaultSerializedRepresentation;
}

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unitConversion;

- (void).cxx_destruct;
- (id)defaultState;
- (id)defaultSerializedRepresentation;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (id)localizedLabelForPossibleUnit:(id)a0 magnitude:(id)a1 style:(unsigned long long)a2;
- (BOOL)parameterStateIsValid:(id)a0;
- (id)possibleUnits;
- (void)setPossibleUnits:(id)a0;
- (void)updatePossibleUnits;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)availableUnitsForWorkoutActivityType:(id)a0 completion:(id /* block */)a1;
- (id)currentWorkoutActivityType;
- (void)updateCurrentStateWithNewUnitString:(id)a0 currentState:(id)a1;

@end
