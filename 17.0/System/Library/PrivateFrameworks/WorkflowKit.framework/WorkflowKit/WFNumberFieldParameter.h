@class NSString;

@interface WFNumberFieldParameter : WFParameter <WFParameterDialogProvider>

@property (readonly, nonatomic) NSString *textAlignment;
@property (readonly, nonatomic) BOOL allowsDecimalNumbers;
@property (readonly, nonatomic) BOOL allowsNegativeNumbers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)defaultAllowsDecimalNumbers;
+ (BOOL)defaultAllowsNegativeNumbers;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)createDialogRequestWithAttribution:(id)a0 defaultState:(id)a1 prompt:(id)a2 completionHandler:(id /* block */)a3;
- (id)defaultSupportedVariableTypes;
- (id)parameterStateFromDialogResponse:(id)a0;
- (BOOL)shouldAlignLabels;
- (Class)singleStateClass;

@end
