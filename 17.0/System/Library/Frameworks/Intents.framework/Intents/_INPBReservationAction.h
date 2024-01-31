@class _INPBDateTimeRange, NSString, _INPBUserActivity;

@interface _INPBReservationAction : PBCodable <_INPBReservationAction, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) _INPBUserActivity *userActivity;
@property (readonly, nonatomic) BOOL hasUserActivity;
@property (retain, nonatomic) _INPBDateTimeRange *validDuration;
@property (readonly, nonatomic) BOOL hasValidDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
