@class INSettingMetadata, INNumericSettingValue, NSString, INTemporalEventTrigger;

@interface INSetNumericSettingIntent : INIntent <INSetNumericSettingIntentExport>

@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly, copy, nonatomic) INNumericSettingValue *numericValue;
@property (readonly, nonatomic) long long boundedValue;
@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (void)setAction:(long long)a0;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithSettingMetadata:(id)a0 numericValue:(id)a1 boundedValue:(long long)a2 action:(long long)a3 temporalEventTrigger:(id)a4;
- (id)parametersByName;
- (void)setBoundedValue:(long long)a0;
- (void)setNumericValue:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setSettingMetadata:(id)a0;
- (void)setTemporalEventTrigger:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
