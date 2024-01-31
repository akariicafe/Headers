@class NSString;

@interface _INPBScoredValue : PBCodable <_INPBScoredValue, NSSecureCoding, NSCopying> {
    struct { unsigned char score : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long score;
@property (nonatomic) BOOL hasScore;
@property (copy, nonatomic) NSString *value;
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

@end
