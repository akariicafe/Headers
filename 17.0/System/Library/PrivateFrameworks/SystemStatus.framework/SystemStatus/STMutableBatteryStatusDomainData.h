@class NSString;

@interface STMutableBatteryStatusDomainData : STBatteryStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic) unsigned long long chargingState;
@property (nonatomic) unsigned long long percentCharge;
@property (nonatomic, getter=isBatterySaverModeActive) BOOL batterySaverModeActive;
@property (copy, nonatomic) NSString *chargingDescription;
@property (nonatomic) unsigned long long chargingDescriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setChargingState:(unsigned long long)a0;
- (BOOL)applyDiff:(id)a0;
- (void)setBatterySaverModeActive:(BOOL)a0;
- (void)setPercentCharge:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setChargingDescription:(id)a0;
- (void)setChargingDescriptionType:(unsigned long long)a0;

@end
