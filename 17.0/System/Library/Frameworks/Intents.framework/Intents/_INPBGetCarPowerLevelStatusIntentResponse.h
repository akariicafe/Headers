@class _INPBInteger, NSString, _INPBDateTime, _INPBJSONDictionary, _INPBDouble, _INPBDistance, _INPBEnergy;

@interface _INPBGetCarPowerLevelStatusIntentResponse : PBCodable <_INPBGetCarPowerLevelStatusIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char activeConnector : 1; unsigned char charging : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int activeConnector;
@property (nonatomic) BOOL hasActiveConnector;
@property (copy, nonatomic) NSString *carIdentifier;
@property (readonly, nonatomic) BOOL hasCarIdentifier;
@property (retain, nonatomic) _INPBDouble *chargePercentRemaining;
@property (readonly, nonatomic) BOOL hasChargePercentRemaining;
@property (nonatomic) BOOL charging;
@property (nonatomic) BOOL hasCharging;
@property (retain, nonatomic) _INPBJSONDictionary *chargingFormulaArguments;
@property (readonly, nonatomic) BOOL hasChargingFormulaArguments;
@property (retain, nonatomic) _INPBJSONDictionary *consumptionFormulaArguments;
@property (readonly, nonatomic) BOOL hasConsumptionFormulaArguments;
@property (retain, nonatomic) _INPBEnergy *currentBatteryCapacity;
@property (readonly, nonatomic) BOOL hasCurrentBatteryCapacity;
@property (retain, nonatomic) _INPBDateTime *dateOfLastStateUpdate;
@property (readonly, nonatomic) BOOL hasDateOfLastStateUpdate;
@property (retain, nonatomic) _INPBDistance *distanceRemaining;
@property (readonly, nonatomic) BOOL hasDistanceRemaining;
@property (retain, nonatomic) _INPBDistance *distanceRemainingElectric;
@property (readonly, nonatomic) BOOL hasDistanceRemainingElectric;
@property (retain, nonatomic) _INPBDistance *distanceRemainingFuel;
@property (readonly, nonatomic) BOOL hasDistanceRemainingFuel;
@property (retain, nonatomic) _INPBDouble *fuelPercentRemaining;
@property (readonly, nonatomic) BOOL hasFuelPercentRemaining;
@property (retain, nonatomic) _INPBEnergy *maximumBatteryCapacity;
@property (readonly, nonatomic) BOOL hasMaximumBatteryCapacity;
@property (retain, nonatomic) _INPBDistance *maximumDistance;
@property (readonly, nonatomic) BOOL hasMaximumDistance;
@property (retain, nonatomic) _INPBDistance *maximumDistanceElectric;
@property (readonly, nonatomic) BOOL hasMaximumDistanceElectric;
@property (retain, nonatomic) _INPBDistance *maximumDistanceFuel;
@property (readonly, nonatomic) BOOL hasMaximumDistanceFuel;
@property (retain, nonatomic) _INPBEnergy *minimumBatteryCapacity;
@property (readonly, nonatomic) BOOL hasMinimumBatteryCapacity;
@property (retain, nonatomic) _INPBInteger *minutesToFull;
@property (readonly, nonatomic) BOOL hasMinutesToFull;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsActiveConnector:(id)a0;
- (id)activeConnectorAsString:(int)a0;

@end
