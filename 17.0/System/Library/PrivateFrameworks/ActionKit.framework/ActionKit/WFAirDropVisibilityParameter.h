@class NSArray;

@interface WFAirDropVisibilityParameter : WFEnumerationParameter

@property (nonatomic, readonly) NSArray *possibleStates;
@property (nonatomic, readonly) id defaultSerializedRepresentation;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;

@end
