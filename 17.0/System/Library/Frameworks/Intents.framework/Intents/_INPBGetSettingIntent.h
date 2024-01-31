@class _INPBSettingMetadata, NSString, _INPBIntentMetadata;

@interface _INPBGetSettingIntent : PBCodable <_INPBGetSettingIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char confirmationValue : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int confirmationValue;
@property (nonatomic) BOOL hasConfirmationValue;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata;
@property (readonly, nonatomic) BOOL hasSettingMetadata;
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
- (int)StringAsConfirmationValue:(id)a0;
- (id)confirmationValueAsString:(int)a0;

@end
