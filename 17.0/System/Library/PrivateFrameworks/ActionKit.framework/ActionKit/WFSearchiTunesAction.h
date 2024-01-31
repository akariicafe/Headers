@class NSString;

@interface WFSearchiTunesAction : WFAction <WFDynamicEnumerationDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mediaType;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)defaultSerializedRepresentationForEnumeration:(id)a0;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)initializeParameters;
- (id)possibleStatesForEnumeration:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)updateParameterVisibility;

@end
