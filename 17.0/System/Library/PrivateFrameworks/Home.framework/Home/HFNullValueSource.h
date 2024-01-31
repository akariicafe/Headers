@class NSString, NAIdentity;
@protocol HFCharacteristicOperationContextProviding;

@interface HFNullValueSource : NSObject <HFLightProfileValueSource, HFCharacteristicValueSource, HFMediaValueSource>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void)beginTransactionWithReason:(id)a0 readPolicy:(id)a1 logger:(id)a2;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)a0;
- (id)cachedValueForCharacteristic:(id)a0;
- (void)clearCachedPlaybackStateWriteErrorWithReason:(id)a0 notifyDelegates:(BOOL)a1;
- (void)commitTransactionWithReason:(id)a0;
- (BOOL)hasPendingWritesForRouteID:(id)a0;
- (long long)lastPlaybackStateForProfileForRouteID:(id)a0;
- (id)mediaProfileContainerForRouteID:(id)a0;
- (id)readValuesForCharacteristicTypes:(id)a0 inServices:(id)a1;
- (id)readValuesForCharacteristics:(id)a0;
- (id)writePlaybackState:(long long)a0 playbackArchive:(id)a1 forRouteID:(id)a2;
- (id)writeValuesForCharacteristics:(id)a0;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)a0 lightProfile:(id)a1 completion:(id /* block */)a2;
- (BOOL)isNaturalLightingEnabledForProfile:(id)a0;
- (BOOL)isNaturalLightingSupportedForProfile:(id)a0;
- (id)writeNaturalLightEnabledState:(BOOL)a0 forProfile:(id)a1;

@end
