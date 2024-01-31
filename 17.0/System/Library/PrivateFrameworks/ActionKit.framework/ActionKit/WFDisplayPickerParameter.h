@class NSArray, NSString;

@interface WFDisplayPickerParameter : WFDynamicEnumerationParameter <WFDynamicEnumerationDataSource>

@property (readonly, nonatomic) NSArray *displays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (id)enumeration:(id)a0 accessoryIconForPossibleState:(id)a1;
- (id)enumeration:(id)a0 accessoryImageForPossibleState:(id)a1;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (id)enumeration:(id)a0 localizedSubtitleLabelForPossibleState:(id)a1;
- (id)possibleStatesForEnumeration:(id)a0;
- (Class)singleStateClass;

@end
