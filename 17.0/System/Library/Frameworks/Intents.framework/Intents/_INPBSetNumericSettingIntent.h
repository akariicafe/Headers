@class _INPBSettingMetadata, NSString, _INPBNumericSettingValue, _INPBIntentMetadata, _INPBTemporalEventTrigger;

@interface _INPBSetNumericSettingIntent : PBCodable <_INPBSetNumericSettingIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char action : 1; unsigned char boundedValue : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int action;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) int boundedValue;
@property (nonatomic) BOOL hasBoundedValue;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBNumericSettingValue *numericValue;
@property (readonly, nonatomic) BOOL hasNumericValue;
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property (readonly, nonatomic) BOOL hasSettingMetadata;
@property (retain, nonatomic) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (readonly, nonatomic) BOOL hasTemporalEventTrigger;
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
- (id)actionAsString:(int)a0;
- (int)StringAsAction:(id)a0;
- (int)StringAsBoundedValue:(id)a0;
- (id)boundedValueAsString:(int)a0;

@end
