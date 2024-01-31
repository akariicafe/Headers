@class NSString, _INPBHomeAttributeValue;

@interface _INPBHomeUserTask : PBCodable <_INPBHomeUserTask, NSSecureCoding, NSCopying> {
    struct { unsigned char attribute : 1; unsigned char taskType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int attribute;
@property (nonatomic) BOOL hasAttribute;
@property (nonatomic) int taskType;
@property (nonatomic) BOOL hasTaskType;
@property (retain, nonatomic) _INPBHomeAttributeValue *value;
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
- (int)StringAsAttribute:(id)a0;
- (int)StringAsTaskType:(id)a0;
- (id)attributeAsString:(int)a0;
- (id)taskTypeAsString:(int)a0;

@end
