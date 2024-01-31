@class NSString, _INPBFilePropertyValue;

@interface _INPBFileProperty : PBCodable <_INPBFileProperty, NSSecureCoding, NSCopying> {
    struct { unsigned char name : 1; unsigned char qualifier : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int name;
@property (nonatomic) BOOL hasName;
@property (nonatomic) int qualifier;
@property (nonatomic) BOOL hasQualifier;
@property (retain, nonatomic) _INPBFilePropertyValue *value;
@property (readonly, nonatomic) BOOL hasValue;
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
- (int)StringAsName:(id)a0;
- (id)nameAsString:(int)a0;
- (int)StringAsQualifier:(id)a0;
- (id)qualifierAsString:(int)a0;

@end
