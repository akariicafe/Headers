@class NSString, NSNumber, NSDateFormatter;

@interface WFDateFieldParameter : WFTextInputParameter <WFParameterDialogProvider>

@property (readonly, nonatomic) NSString *hintDateMode;
@property (readonly, nonatomic) NSNumber *dateFormatterDateStyleNumber;
@property (readonly, nonatomic) NSNumber *dateFormatterTimeStyleNumber;
@property (readonly, nonatomic) NSNumber *dateFormatterRelativeDateFormattingNumber;
@property (readonly, copy, nonatomic) NSString *dateFormatterTemplateString;
@property (readonly, nonatomic) NSString *resultType;
@property (readonly, nonatomic) NSString *reactiveParameterKey;
@property (readonly, nonatomic) NSString *localizedIncompleteHintString;
@property (readonly, nonatomic) BOOL timeOnlyMode;
@property (readonly, nonatomic) BOOL dateOnlyMode;
@property (readonly, nonatomic) BOOL detectsAllDayDates;
@property (readonly, nonatomic) BOOL displaysAllDayString;
@property (nonatomic) BOOL forcesAllDayDates;
@property (readonly, nonatomic) NSDateFormatter *hintDateFormatter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)createDialogTextFieldConfigurationWithDefaultState:(id)a0;
- (id)dateFormatterForConfiguration:(id)a0;
- (id)datePickerConfiguration;
- (id)hintForState:(id)a0;
- (id)parameterStateFromDialogResponse:(id)a0;
- (Class)singleStateClass;

@end
