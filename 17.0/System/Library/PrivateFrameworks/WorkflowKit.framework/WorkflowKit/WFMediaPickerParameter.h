@class WFAction;

@interface WFMediaPickerParameter : WFParameter

@property (weak, nonatomic) WFAction *action;

- (void).cxx_destruct;
- (id)localizedLabelForState:(id)a0;
- (BOOL)parameterStateIsValid:(id)a0;
- (Class)singleStateClass;

@end
