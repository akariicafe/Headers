@class NSString, WFAction;

@interface WFListeningModePickerParameter : WFDynamicEnumerationParameter <WFActionEventObserver, WFDynamicEnumerationDataSource>

@property (weak, nonatomic) WFAction *action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (void)action:(id)a0 parameterStateDidChangeForKey:(id)a1;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (Class)singleStateClass;

@end
