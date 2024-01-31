@class NSArray;

@interface WFWorkflowFolderPickerParameter : WFEnumerationParameter {
    NSArray *_possibleStates;
}

- (id)possibleStates;
- (void).cxx_destruct;
- (id)accessoryImageForPossibleState:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (id)accessoryIconForPossibleState:(id)a0;
- (Class)singleStateClass;

@end
