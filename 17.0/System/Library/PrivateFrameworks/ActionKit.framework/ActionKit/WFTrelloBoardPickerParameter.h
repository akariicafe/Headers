@class NSArray;

@interface WFTrelloBoardPickerParameter : WFEnumerationParameter

@property (retain, nonatomic) id observer;
@property (readonly, nonatomic) NSArray *possibleStates;

- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)possibleStatesDidChange;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)wasRemovedFromWorkflow;
- (void)updateBoards;

@end
