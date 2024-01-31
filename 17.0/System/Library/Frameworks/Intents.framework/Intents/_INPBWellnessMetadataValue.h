@class NSString, _INPBInteger, _INPBString, _INPBDouble;

@interface _INPBWellnessMetadataValue : PBCodable <_INPBWellnessMetadataValue, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBDouble *pbDoubleValue;
@property (readonly, nonatomic) BOOL hasPbDoubleValue;
@property (retain, nonatomic) _INPBInteger *ordinalValue;
@property (readonly, nonatomic) BOOL hasOrdinalValue;
@property (retain, nonatomic) _INPBString *pbStringValue;
@property (readonly, nonatomic) BOOL hasPbStringValue;
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

@end
