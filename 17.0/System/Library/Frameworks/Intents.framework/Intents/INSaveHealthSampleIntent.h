@class NSArray, NSString, HKUnit, INDateComponentsRange;

@interface INSaveHealthSampleIntent : INIntent <INSaveHealthSampleIntentExport>

@property (readonly, copy, nonatomic) INDateComponentsRange *recordDate;
@property (readonly, nonatomic) long long objectType;
@property (readonly, copy, nonatomic) NSArray *values;
@property (readonly, copy, nonatomic) HKUnit *unit;
@property (readonly, copy, nonatomic) NSArray *sampleMetadatas;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (void)setUnit:(id)a0;
- (void)setValues:(id)a0;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithRecordDate:(id)a0 objectType:(long long)a1 values:(id)a2 unit:(id)a3 sampleMetadatas:(id)a4;
- (id)parametersByName;
- (void)setObjectType:(long long)a0;
- (void)setParametersByName:(id)a0;
- (void)setRecordDate:(id)a0;
- (void)setSampleMetadatas:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
