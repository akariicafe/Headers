@class NSString, NSDate;

@interface WFDatePickerParameter : WFParameter <WFParameterDialogProvider>

@property (copy, nonatomic) NSString *datePickerMode;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) NSDate *maximumDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)defaultSupportedVariableTypes;
- (id)parameterStateFromDialogResponse:(id)a0;
- (Class)singleStateClass;

@end
