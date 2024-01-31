@class INSettingMetadata, NSString, INTemporalEventTrigger, INDateComponentsRange;

@interface INSetTemporalSettingIntent : INIntent <INSetTemporalSettingIntentExport>

@property (readonly, copy, nonatomic) INSettingMetadata *settingMetadata;
@property (readonly, copy, nonatomic) INDateComponentsRange *timeValue;
@property (readonly, copy, nonatomic) INTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) long long action;
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
- (id)initWithSettingMetadata:(id)a0 timeValue:(id)a1 temporalEventTrigger:(id)a2 action:(long long)a3;
- (id)parametersByName;
- (void)setParametersByName:(id)a0;
- (void)setSettingMetadata:(id)a0;
- (void)setTemporalEventTrigger:(id)a0;
- (void)setTimeValue:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
