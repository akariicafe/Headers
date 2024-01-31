@class _INPBRentalCar, _INPBDateTimeRange, _INPBLocationValue, _INPBReservation, NSString;

@interface _INPBRentalCarReservation : PBCodable <_INPBRentalCarReservation, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBLocationValue *dropOffLocation;
@property (readonly, nonatomic) BOOL hasDropOffLocation;
@property (retain, nonatomic) _INPBLocationValue *pickupLocation;
@property (readonly, nonatomic) BOOL hasPickupLocation;
@property (retain, nonatomic) _INPBRentalCar *rentalCar;
@property (readonly, nonatomic) BOOL hasRentalCar;
@property (retain, nonatomic) _INPBDateTimeRange *rentalDuration;
@property (readonly, nonatomic) BOOL hasRentalDuration;
@property (retain, nonatomic) _INPBReservation *reservation;
@property (readonly, nonatomic) BOOL hasReservation;
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
