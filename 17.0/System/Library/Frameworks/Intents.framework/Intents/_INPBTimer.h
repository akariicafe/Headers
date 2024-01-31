@class NSString, _INPBDataString;

@interface _INPBTimer : PBCodable <_INPBTimer, NSSecureCoding, NSCopying> {
    struct { unsigned char duration : 1; unsigned char remainingTime : 1; unsigned char state : 1; unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double duration;
@property (nonatomic) BOOL hasDuration;
@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) _INPBDataString *label;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) double remainingTime;
@property (nonatomic) BOOL hasRemainingTime;
@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (id)stateAsString:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsState:(id)a0;

@end
