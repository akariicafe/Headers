@class _INPBIntentMetadata, NSString, _INPBString;

@interface _INPBGetFileInformationIntent : PBCodable <_INPBGetFileInformationIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char entityType : 1; unsigned char propertyName : 1; unsigned char qualifier : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *entityName;
@property (readonly, nonatomic) BOOL hasEntityName;
@property (nonatomic) int entityType;
@property (nonatomic) BOOL hasEntityType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int propertyName;
@property (nonatomic) BOOL hasPropertyName;
@property (nonatomic) int qualifier;
@property (nonatomic) BOOL hasQualifier;
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
- (int)StringAsEntityType:(id)a0;
- (int)StringAsPropertyName:(id)a0;
- (int)StringAsQualifier:(id)a0;
- (id)entityTypeAsString:(int)a0;
- (id)propertyNameAsString:(int)a0;
- (id)qualifierAsString:(int)a0;

@end
