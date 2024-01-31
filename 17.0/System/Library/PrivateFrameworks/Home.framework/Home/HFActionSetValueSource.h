@class NSString, NAIdentity, HFItemBuilder, HMActionSet;
@protocol HFActionSetValueSourceDelegate, HFCharacteristicOperationContextProviding, HFActionSetBuilderProtocol;

@interface HFActionSetValueSource : NSObject <HFLightProfileValueSource, HFCharacteristicValueSource, HFMediaValueSource>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder;
@property (retain, nonatomic) HMActionSet *actionSet;
@property (weak, nonatomic) id<HFActionSetValueSourceDelegate> delegate;
@property (readonly, nonatomic) id<HFCharacteristicOperationContextProviding> contextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithActionSet:(id)a0;
- (void)beginTransactionWithReason:(id)a0 readPolicy:(id)a1 logger:(id)a2;
- (id)cachedPlaybackStateWriteErrorForRouteID:(id)a0;
- (id)cachedValueForCharacteristic:(id)a0;
- (void)clearCachedPlaybackStateWriteErrorWithReason:(id)a0 notifyDelegates:(BOOL)a1;
- (void)commitTransactionWithReason:(id)a0;
- (BOOL)hasPendingWritesForRouteID:(id)a0;
- (id)initWithActionSetBuilder:(id)a0;
- (long long)lastPlaybackStateForProfileForRouteID:(id)a0;
- (id)mediaProfileContainerForRouteID:(id)a0;
- (id)readValuesForCharacteristicTypes:(id)a0 inServices:(id)a1;
- (id)readValuesForCharacteristics:(id)a0;
- (id)writePlaybackState:(long long)a0 playbackArchive:(id)a1 forRouteID:(id)a2;
- (id)writeValuesForCharacteristics:(id)a0;
- (id)_actionForCharacteristic:(id)a0;
- (id)_existingActionBuilderForCharacteristic:(id)a0;
- (id)_existingActionBuilderForLightProfile:(id)a0;
- (id)_existingActionBuilderForMediaProfile:(id)a0;
- (BOOL)_isCurrentStateCharacteristic:(id)a0;
- (id)_targetValueForCharacteristic:(id)a0;
- (id)_valueForCurrentStateCharacteristic:(id)a0;
- (void)fetchNaturalLightColorTemperatureForBrightness:(long long)a0 lightProfile:(id)a1 completion:(id /* block */)a2;
- (BOOL)isNaturalLightingEnabledForProfile:(id)a0;
- (BOOL)isNaturalLightingSupportedForProfile:(id)a0;
- (void)mediaValueUpdated:(id)a0 playbackState:(long long)a1 playbackArchive:(id)a2;
- (id)writeNaturalLightEnabledState:(BOOL)a0 forProfile:(id)a1;

@end
