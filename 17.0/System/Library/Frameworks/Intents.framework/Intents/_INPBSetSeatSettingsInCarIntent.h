@class NSString, _INPBInteger, _INPBDataString, _INPBIntentMetadata;

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <_INPBSetSeatSettingsInCarIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char enableCooling : 1; unsigned char enableHeating : 1; unsigned char enableMassage : 1; unsigned char relativeLevelSetting : 1; unsigned char seat : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *carName;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL enableCooling;
@property (nonatomic) BOOL hasEnableCooling;
@property (nonatomic) BOOL enableHeating;
@property (nonatomic) BOOL hasEnableHeating;
@property (nonatomic) BOOL enableMassage;
@property (nonatomic) BOOL hasEnableMassage;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBInteger *level;
@property (readonly, nonatomic) BOOL hasLevel;
@property (nonatomic) int relativeLevelSetting;
@property (nonatomic) BOOL hasRelativeLevelSetting;
@property (nonatomic) int seat;
@property (nonatomic) BOOL hasSeat;
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
- (int)StringAsSeat:(id)a0;
- (int)StringAsRelativeLevelSetting:(id)a0;
- (id)relativeLevelSettingAsString:(int)a0;
- (id)seatAsString:(int)a0;

@end
