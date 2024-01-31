@class INDateComponentsRange, NSString, INAlarm, INSpeakableString, INAlarmSearch;

@interface INUpdateAlarmIntent : INIntent <INUpdateAlarmIntentExport>

@property (readonly, copy, nonatomic) INAlarmSearch *alarmSearch;
@property (readonly, copy, nonatomic) INAlarm *alarm;
@property (readonly, nonatomic) long long operation;
@property (readonly, copy, nonatomic) INDateComponentsRange *proposedTime;
@property (readonly, copy, nonatomic) INSpeakableString *proposedLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (void)setOperation:(long long)a0;
- (void)setProposedTime:(id)a0;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setAlarmSearch:(id)a0;
- (id)initWithAlarmSearch:(id)a0 alarm:(id)a1 operation:(long long)a2 proposedTime:(id)a3 proposedLabel:(id)a4;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)parametersByName;
- (void)setAlarm:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setProposedLabel:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
