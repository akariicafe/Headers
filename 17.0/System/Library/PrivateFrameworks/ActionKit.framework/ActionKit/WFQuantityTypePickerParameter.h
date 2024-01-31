@class NSArray;

@interface WFQuantityTypePickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;

- (void).cxx_destruct;
- (id)accessoryImageForPossibleState:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (BOOL)preferParameterValuePicker;
- (Class)singleStateClass;

@end
