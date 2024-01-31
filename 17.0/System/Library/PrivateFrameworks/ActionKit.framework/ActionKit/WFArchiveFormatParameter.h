@interface WFArchiveFormatParameter : WFEnumerationParameter

- (id)possibleStates;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (Class)singleStateClass;

@end
