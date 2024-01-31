@class NSArray;

@interface WFMakeImageFromPDFPageImageFormatParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)readableStringFromFileTypeString:(id)a0;

@end
