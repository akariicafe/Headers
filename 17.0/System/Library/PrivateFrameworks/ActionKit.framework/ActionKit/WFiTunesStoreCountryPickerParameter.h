@class NSArray;

@interface WFiTunesStoreCountryPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (void).cxx_destruct;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (BOOL)preferParameterValuePicker;
- (Class)singleStateClass;

@end
