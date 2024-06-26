@class HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicUInt8Field, HDFitnessMachineCharacteristicInt16Field, NSDate, HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicUInt16Field;

@interface HDCrossTrainerData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;
    HDFitnessMachineCharacteristicUInt16Field *_stepPerMinuteField;
    HDFitnessMachineCharacteristicUInt16Field *_averageStepRateField;
    HDFitnessMachineCharacteristicDoubleField *_strideCountField;
    HDFitnessMachineCharacteristicUInt16Field *_positiveElevationGainField;
    HDFitnessMachineCharacteristicUInt16Field *_negativeElevationGainField;
    HDFitnessMachineCharacteristicDoubleField *_inclinationField;
    HDFitnessMachineCharacteristicDoubleField *_rampSettingField;
    HDFitnessMachineCharacteristicDoubleField *_resistanceLevelField;
    HDFitnessMachineCharacteristicInt16Field *_instantaneousPowerField;
    HDFitnessMachineCharacteristicInt16Field *_averagePowerField;
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;
}

@property (readonly, nonatomic) NSDate *updateTime;
@property (readonly, nonatomic) BOOL instantaneousSpeedIsSet;
@property (readonly, nonatomic) double instantaneousSpeed;
@property (readonly, nonatomic) BOOL averageSpeedIsSet;
@property (readonly, nonatomic) double averageSpeed;
@property (readonly, nonatomic) BOOL totalDistanceIsSet;
@property (readonly, nonatomic) unsigned int totalDistance;
@property (readonly, nonatomic) BOOL stepPerMinuteIsSet;
@property (readonly, nonatomic) unsigned short stepPerMinute;
@property (readonly, nonatomic) BOOL averageStepRateIsSet;
@property (readonly, nonatomic) unsigned short averageStepRate;
@property (readonly, nonatomic) BOOL strideCountIsSet;
@property (readonly, nonatomic) double strideCount;
@property (readonly, nonatomic) BOOL positiveElevationGainIsSet;
@property (readonly, nonatomic) unsigned short positiveElevationGain;
@property (readonly, nonatomic) BOOL negativeElevationGainIsSet;
@property (readonly, nonatomic) unsigned short negativeElevationGain;
@property (readonly, nonatomic) BOOL inclinationIsSet;
@property (readonly, nonatomic) double inclination;
@property (readonly, nonatomic) BOOL rampSettingIsSet;
@property (readonly, nonatomic) double rampSetting;
@property (readonly, nonatomic) BOOL resistanceLevelIsSet;
@property (readonly, nonatomic) double resistanceLevel;
@property (readonly, nonatomic) BOOL instantaneousPowerIsSet;
@property (readonly, nonatomic) short instantaneousPower;
@property (readonly, nonatomic) BOOL averagePowerIsSet;
@property (readonly, nonatomic) short averagePower;
@property (readonly, nonatomic) BOOL totalEnergyIsSet;
@property (readonly, nonatomic) unsigned short totalEnergy;
@property (readonly, nonatomic) BOOL energyPerHourIsSet;
@property (readonly, nonatomic) unsigned short energyPerHour;
@property (readonly, nonatomic) BOOL energyPerMinuteIsSet;
@property (readonly, nonatomic) unsigned char energyPerMinute;
@property (readonly, nonatomic) BOOL heartRateIsSet;
@property (readonly, nonatomic) unsigned char heartRate;
@property (readonly, nonatomic) BOOL metabolicEquivalentIsSet;
@property (readonly, nonatomic) unsigned char metabolicEquivalent;
@property (readonly, nonatomic) BOOL elapsedTimeIsSet;
@property (readonly, nonatomic) unsigned short elapsedTime;
@property (readonly, nonatomic) BOOL remainingTimeIsSet;
@property (readonly, nonatomic) unsigned short remainingTime;

+ (id)uuid;
+ (unsigned char)flagFieldLength;

- (id)_init;
- (id)description;
- (void).cxx_destruct;
- (id)allFields;
- (id)generateDatums:(id)a0;

@end
