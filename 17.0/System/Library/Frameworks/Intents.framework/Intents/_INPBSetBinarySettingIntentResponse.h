@class NSString;

@interface _INPBSetBinarySettingIntentResponse : PBCodable <_INPBSetBinarySettingIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char oldValue : 1; unsigned char updatedValue : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *errorDetail;
@property (readonly, nonatomic) BOOL hasErrorDetail;
@property (nonatomic) int oldValue;
@property (nonatomic) BOOL hasOldValue;
@property (nonatomic) int updatedValue;
@property (nonatomic) BOOL hasUpdatedValue;
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
- (int)StringAsOldValue:(id)a0;
- (id)oldValueAsString:(int)a0;
- (int)StringAsUpdatedValue:(id)a0;
- (id)updatedValueAsString:(int)a0;

@end
