@class NSString, _INPBLocationValue, _INPBDateTimeRange;

@interface _INPBBoatTrip : PBCodable <_INPBBoatTrip, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBLocationValue *arrivalBoatTerminalLocation;
@property (readonly, nonatomic) BOOL hasArrivalBoatTerminalLocation;
@property (copy, nonatomic) NSString *boatName;
@property (readonly, nonatomic) BOOL hasBoatName;
@property (copy, nonatomic) NSString *boatNumber;
@property (readonly, nonatomic) BOOL hasBoatNumber;
@property (retain, nonatomic) _INPBLocationValue *departureBoatTerminalLocation;
@property (readonly, nonatomic) BOOL hasDepartureBoatTerminalLocation;
@property (copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) BOOL hasProvider;
@property (retain, nonatomic) _INPBDateTimeRange *tripDuration;
@property (readonly, nonatomic) BOOL hasTripDuration;
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
