@class NSString, NAIdentity;
@protocol HFOverrideCharacteristicValueProvider, HFCharacteristicOperationContextProviding, HFCharacteristicValueSource;

@interface HFOverrideCharacteristicValueSource : NSObject <HFLightProfileValueSource, HFCharacteristicValueSource>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> originalValueSource;
@property (weak, nonatomic) id<HFOverrideCharacteristicValueProvider> overrideValueProvider;
@property (readonly, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)beginTransactionWithReason:(id)a0 readPolicy:(id)a1 logger:(id)a2;
- (id)cachedErrorForWriteToCharacteristic:(id)a0;
- (id)cachedValueForCharacteristic:(id)a0;
- (void)commitTransactionWithReason:(id)a0;
- (id)initWithOriginalValueSource:(id)a0 overrideValueProvider:(id)a1;
- (id)readValuesForCharacteristicTypes:(id)a0 inServices:(id)a1;
- (id)readValuesForCharacteristics:(id)a0;
- (id)writeValuesForCharacteristics:(id)a0;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)a0 lightProfile:(id)a1 completion:(id /* block */)a2;
- (BOOL)isNaturalLightingEnabledForProfile:(id)a0;
- (BOOL)isNaturalLightingSupportedForProfile:(id)a0;
- (id)writeNaturalLightEnabledState:(BOOL)a0 forProfile:(id)a1;

@end
