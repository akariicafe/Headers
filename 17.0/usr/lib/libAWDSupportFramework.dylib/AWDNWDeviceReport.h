@class AWDNWAccumulator;

@interface AWDNWDeviceReport : PBCodable <NSCopying> {
    struct { unsigned char batteryAbsoluteCapacity : 1; unsigned char batteryCurrentCapacity : 1; unsigned char batteryDesignCapacity : 1; unsigned char batteryMaximumCapacity : 1; unsigned char batteryPercentage : 1; unsigned char batteryTimeRemaining : 1; unsigned char batteryVoltage : 1; unsigned char cellularMode : 1; unsigned char motionState : 1; unsigned char thermalPressure : 1; unsigned char batteryAtCriticalLevel : 1; unsigned char batteryAtWarnLevel : 1; unsigned char batteryExternalPowerIsConnected : 1; unsigned char batteryFullyCharged : 1; unsigned char batteryIsCharging : 1; unsigned char devicePluggedIn : 1; unsigned char deviceScreenOn : 1; } _has;
}

@property (nonatomic) BOOL hasBatteryPercentage;
@property (nonatomic) unsigned int batteryPercentage;
@property (nonatomic) BOOL hasBatteryCurrentCapacity;
@property (nonatomic) unsigned int batteryCurrentCapacity;
@property (nonatomic) BOOL hasBatteryMaximumCapacity;
@property (nonatomic) unsigned int batteryMaximumCapacity;
@property (nonatomic) BOOL hasBatteryDesignCapacity;
@property (nonatomic) unsigned int batteryDesignCapacity;
@property (nonatomic) BOOL hasBatteryAbsoluteCapacity;
@property (nonatomic) unsigned int batteryAbsoluteCapacity;
@property (nonatomic) BOOL hasBatteryVoltage;
@property (nonatomic) unsigned int batteryVoltage;
@property (nonatomic) BOOL hasBatteryTimeRemaining;
@property (nonatomic) unsigned int batteryTimeRemaining;
@property (nonatomic) BOOL hasBatteryExternalPowerIsConnected;
@property (nonatomic) BOOL batteryExternalPowerIsConnected;
@property (nonatomic) BOOL hasBatteryIsCharging;
@property (nonatomic) BOOL batteryIsCharging;
@property (nonatomic) BOOL hasBatteryFullyCharged;
@property (nonatomic) BOOL batteryFullyCharged;
@property (nonatomic) BOOL hasBatteryAtWarnLevel;
@property (nonatomic) BOOL batteryAtWarnLevel;
@property (nonatomic) BOOL hasBatteryAtCriticalLevel;
@property (nonatomic) BOOL batteryAtCriticalLevel;
@property (nonatomic) BOOL hasDevicePluggedIn;
@property (nonatomic) BOOL devicePluggedIn;
@property (nonatomic) BOOL hasDeviceScreenOn;
@property (nonatomic) BOOL deviceScreenOn;
@property (nonatomic) BOOL hasMotionState;
@property (nonatomic) int motionState;
@property (nonatomic) BOOL hasThermalPressure;
@property (nonatomic) int thermalPressure;
@property (nonatomic) BOOL hasCellularMode;
@property (nonatomic) int cellularMode;
@property (readonly, nonatomic) BOOL hasBatteryAccumulator;
@property (retain, nonatomic) AWDNWAccumulator *batteryAccumulator;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsMotionState:(id)a0;
- (id)motionStateAsString:(int)a0;
- (int)StringAsThermalPressure:(id)a0;
- (int)StringAsCellularMode:(id)a0;
- (id)cellularModeAsString:(int)a0;
- (id)thermalPressureAsString:(int)a0;

@end
