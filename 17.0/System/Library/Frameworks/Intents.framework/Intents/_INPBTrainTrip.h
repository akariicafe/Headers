@class NSString, _INPBLocationValue, _INPBDateTime, _INPBDateTimeRange;

@interface _INPBTrainTrip : PBCodable <_INPBTrainTrip, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *arrivalPlatform;
@property (readonly, nonatomic) BOOL hasArrivalPlatform;
@property (retain, nonatomic) _INPBLocationValue *arrivalStationLocation;
@property (readonly, nonatomic) BOOL hasArrivalStationLocation;
@property (copy, nonatomic) NSString *departurePlatform;
@property (readonly, nonatomic) BOOL hasDeparturePlatform;
@property (retain, nonatomic) _INPBLocationValue *departureStationLocation;
@property (readonly, nonatomic) BOOL hasDepartureStationLocation;
@property (retain, nonatomic) _INPBDateTime *onlineCheckInTime;
@property (readonly, nonatomic) BOOL hasOnlineCheckInTime;
@property (copy, nonatomic) NSString *provider;
@property (readonly, nonatomic) BOOL hasProvider;
@property (copy, nonatomic) NSString *trainName;
@property (readonly, nonatomic) BOOL hasTrainName;
@property (copy, nonatomic) NSString *trainNumber;
@property (readonly, nonatomic) BOOL hasTrainNumber;
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
