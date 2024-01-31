@class NSArray;

@interface WFAccountPickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) id observer;
@property (readonly, nonatomic) Class accountClass;

- (void)dealloc;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)possibleStatesDidChange;
- (void)wasAddedToWorkflow;
- (id)accountWithName:(id)a0;

@end
