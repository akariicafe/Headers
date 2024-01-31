@class NSDictionary, NSArray;

@interface WFFileLabelColorPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

@property (readonly, nonatomic) NSDictionary *localizedLabelsForLabelNumbers;

- (id)possibleStates;
- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)accessoryColorForPossibleState:(id)a0;
- (Class)singleStateClass;

@end
