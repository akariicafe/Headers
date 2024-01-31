@class NSString, NSMeasurement, NSNumber, INSpeakableString;

@interface INSetClimateSettingsInCarIntent : INIntent <INSetClimateSettingsInCarIntentExport>

@property (readonly, copy, nonatomic) NSNumber *enableFan;
@property (readonly, copy, nonatomic) NSNumber *enableAirConditioner;
@property (readonly, copy, nonatomic) NSNumber *enableClimateControl;
@property (readonly, copy, nonatomic) NSNumber *enableAutoMode;
@property (readonly, nonatomic) long long airCirculationMode;
@property (readonly, copy, nonatomic) NSNumber *fanSpeedIndex;
@property (readonly, copy, nonatomic) NSNumber *fanSpeedPercentage;
@property (readonly, nonatomic) long long relativeFanSpeedSetting;
@property (readonly, copy, nonatomic) NSMeasurement *temperature;
@property (readonly, nonatomic) long long relativeTemperatureSetting;
@property (readonly, nonatomic) long long climateZone;
@property (readonly, copy, nonatomic) INSpeakableString *carName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_dictionaryRepresentation;
- (void)setTemperature:(id)a0;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (void)setCarName:(id)a0;
- (long long)_intentCategory;
- (void)setClimateZone:(long long)a0;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithEnableFan:(id)a0 enableAirConditioner:(id)a1 enableClimateControl:(id)a2 enableAutoMode:(id)a3 airCirculationMode:(long long)a4 fanSpeedIndex:(id)a5 fanSpeedPercentage:(id)a6 relativeFanSpeedSetting:(long long)a7 temperature:(id)a8 relativeTemperatureSetting:(long long)a9 climateZone:(long long)a10;
- (id)initWithEnableFan:(id)a0 enableAirConditioner:(id)a1 enableClimateControl:(id)a2 enableAutoMode:(id)a3 airCirculationMode:(long long)a4 fanSpeedIndex:(id)a5 fanSpeedPercentage:(id)a6 relativeFanSpeedSetting:(long long)a7 temperature:(id)a8 relativeTemperatureSetting:(long long)a9 climateZone:(long long)a10 carName:(id)a11;
- (id)parametersByName;
- (void)setAirCirculationMode:(long long)a0;
- (void)setEnableAirConditioner:(id)a0;
- (void)setEnableAutoMode:(id)a0;
- (void)setEnableClimateControl:(id)a0;
- (void)setEnableFan:(id)a0;
- (void)setFanSpeedIndex:(id)a0;
- (void)setFanSpeedPercentage:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setRelativeFanSpeedSetting:(long long)a0;
- (void)setRelativeTemperatureSetting:(long long)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
