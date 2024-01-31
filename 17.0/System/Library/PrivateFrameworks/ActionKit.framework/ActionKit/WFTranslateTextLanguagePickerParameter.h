@class NSArray;

@interface WFTranslateTextLanguagePickerParameter : WFEnumerationParameter

@property (readonly, nonatomic) NSArray *possibleStates;
@property (readonly, nonatomic) BOOL supportsLanguageDetection;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)localizedLabelForPossibleState:(id)a0;
- (id)defaultSerializedRepresentation;
- (void)possibleStatesDidChange;
- (id)possibleStatesForLocalization;
- (Class)singleStateClass;
- (void)wasAddedToWorkflow;
- (void)getAvailableLanguagesWithCompletionHandler:(id /* block */)a0;

@end
