@class INTemporalEventTrigger, NSString, INSettingMetadata;

@interface INSetBinarySettingIntent : INIntent <INSetBinarySettingIntentExport>

@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly, nonatomic) long long binaryValue;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (void)setBinaryValue:(long long)a0;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithSettingMetadata:(id)a0 binaryValue:(long long)a1 temporalEventTrigger:(id)a2;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setSettingMetadata:(id)a0;
- (void)setTemporalEventTrigger:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
