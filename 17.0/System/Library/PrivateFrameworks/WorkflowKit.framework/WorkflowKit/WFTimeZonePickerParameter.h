@class NSArray, NSString, NSObject, ALCityManager;
@protocol OS_dispatch_queue;

@interface WFTimeZonePickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (retain, nonatomic) NSArray *calendarStates;
@property (retain, nonatomic) ALCityManager *cityManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (BOOL)preferParameterValuePicker;
- (Class)singleStateClass;

@end
