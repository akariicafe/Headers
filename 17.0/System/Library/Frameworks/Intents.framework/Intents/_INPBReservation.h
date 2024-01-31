@class NSArray, _INPBTimestamp, _INPBDataString, NSString, _INPBURLValue;

@interface _INPBReservation : PBCodable <_INPBReservation, NSSecureCoding, NSCopying> {
    struct { unsigned char reservationStatus : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBURLValue *url;
@property (readonly, nonatomic) BOOL hasUrl;
@property (copy, nonatomic) NSArray *actions;
@property (readonly, nonatomic) unsigned long long actionsCount;
@property (retain, nonatomic) _INPBTimestamp *bookingTime;
@property (readonly, nonatomic) BOOL hasBookingTime;
@property (retain, nonatomic) _INPBDataString *itemReference;
@property (readonly, nonatomic) BOOL hasItemReference;
@property (copy, nonatomic) NSString *reservationHolderName;
@property (readonly, nonatomic) BOOL hasReservationHolderName;
@property (copy, nonatomic) NSString *reservationNumber;
@property (readonly, nonatomic) BOOL hasReservationNumber;
@property (nonatomic) int reservationStatus;
@property (nonatomic) BOOL hasReservationStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)actionsType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)clearActions;
- (void)writeTo:(id)a0;
- (void)addActions:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsReservationStatus:(id)a0;
- (id)actionsAtIndex:(unsigned long long)a0;
- (id)reservationStatusAsString:(int)a0;

@end
