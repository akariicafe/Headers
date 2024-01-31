@class NSString, _INPBColor, NSArray, _INPBCarHeadUnit;

@interface _INPBCar : PBCodable <_INPBCar, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *carIdentifier;
@property (readonly, nonatomic) BOOL hasCarIdentifier;
@property (retain, nonatomic) _INPBColor *color;
@property (readonly, nonatomic) BOOL hasColor;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) _INPBCarHeadUnit *headUnit;
@property (readonly, nonatomic) BOOL hasHeadUnit;
@property (copy, nonatomic) NSString *make;
@property (readonly, nonatomic) BOOL hasMake;
@property (copy, nonatomic) NSString *model;
@property (readonly, nonatomic) BOOL hasModel;
@property (copy, nonatomic) NSArray *powerPerConnectors;
@property (readonly, nonatomic) unsigned long long powerPerConnectorsCount;
@property (copy, nonatomic) NSArray *supportedChargingConnectors;
@property (readonly, nonatomic) unsigned long long supportedChargingConnectorsCount;
@property (copy, nonatomic) NSString *year;
@property (readonly, nonatomic) BOOL hasYear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)powerPerConnectorType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSupportedChargingConnectors:(id)a0;
- (void)addPowerPerConnector:(id)a0;
- (void)clearPowerPerConnectors;
- (void)clearSupportedChargingConnectors;
- (id)powerPerConnectorAtIndex:(unsigned long long)a0;
- (id)supportedChargingConnectorsAtIndex:(unsigned long long)a0;

@end
