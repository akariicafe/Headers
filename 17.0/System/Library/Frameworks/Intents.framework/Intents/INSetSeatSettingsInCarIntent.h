@class NSNumber, INSpeakableString, NSString;

@interface INSetSeatSettingsInCarIntent : INIntent <INSetSeatSettingsInCarIntentExport>

@property (readonly, copy, nonatomic) NSNumber *enableHeating;
@property (readonly, copy, nonatomic) NSNumber *enableCooling;
@property (readonly, copy, nonatomic) NSNumber *enableMassage;
@property (readonly, nonatomic) long long seat;
@property (readonly, copy, nonatomic) NSNumber *level;
@property (readonly, nonatomic) long long relativeLevelSetting;
@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (void)setLevel:(id)a0;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setCarName:(id)a0;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithEnableHeating:(id)a0 enableCooling:(id)a1 enableMassage:(id)a2 seat:(long long)a3 level:(id)a4 relativeLevelSetting:(long long)a5;
- (id)initWithEnableHeating:(id)a0 enableCooling:(id)a1 enableMassage:(id)a2 seat:(long long)a3 level:(id)a4 relativeLevelSetting:(long long)a5 carName:(id)a6;
- (id)parametersByName;
- (void)setEnableCooling:(id)a0;
- (void)setEnableHeating:(id)a0;
- (void)setEnableMassage:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setRelativeLevelSetting:(long long)a0;
- (void)setSeat:(long long)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
