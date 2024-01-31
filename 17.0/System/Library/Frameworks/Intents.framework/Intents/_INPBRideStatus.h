@class _INPBTimestamp, NSString, NSArray, _INPBLocationValue, _INPBDateTimeRangeValue, _INPBRideCompletionStatus, _INPBRideDriver, _INPBRideOption, _INPBRideVehicle, _INPBUserActivity;

@interface _INPBRideStatus : PBCodable <_INPBRideStatus, NSSecureCoding, NSCopying> {
    struct { unsigned char phase : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *additionalActionItems;
@property (readonly, nonatomic) unsigned long long additionalActionItemsCount;
@property (retain, nonatomic) _INPBRideCompletionStatus *completionStatus;
@property (readonly, nonatomic) BOOL hasCompletionStatus;
@property (retain, nonatomic) _INPBRideDriver *driver;
@property (readonly, nonatomic) BOOL hasDriver;
@property (retain, nonatomic) _INPBLocationValue *dropOffLocation;
@property (readonly, nonatomic) BOOL hasDropOffLocation;
@property (retain, nonatomic) _INPBTimestamp *estimatedDropOffDate;
@property (readonly, nonatomic) BOOL hasEstimatedDropOffDate;
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupDate;
@property (readonly, nonatomic) BOOL hasEstimatedPickupDate;
@property (retain, nonatomic) _INPBTimestamp *estimatedPickupEndDate;
@property (readonly, nonatomic) BOOL hasEstimatedPickupEndDate;
@property (nonatomic) int phase;
@property (nonatomic) BOOL hasPhase;
@property (retain, nonatomic) _INPBLocationValue *pickupLocation;
@property (readonly, nonatomic) BOOL hasPickupLocation;
@property (copy, nonatomic) NSString *rideIdentifier;
@property (readonly, nonatomic) BOOL hasRideIdentifier;
@property (retain, nonatomic) _INPBRideOption *rideOption;
@property (readonly, nonatomic) BOOL hasRideOption;
@property (retain, nonatomic) _INPBDateTimeRangeValue *scheduledPickupTime;
@property (readonly, nonatomic) BOOL hasScheduledPickupTime;
@property (retain, nonatomic) _INPBUserActivity *userActivityForCancelingInApplication;
@property (readonly, nonatomic) BOOL hasUserActivityForCancelingInApplication;
@property (retain, nonatomic) _INPBRideVehicle *vehicle;
@property (readonly, nonatomic) BOOL hasVehicle;
@property (copy, nonatomic) NSArray *waypoints;
@property (readonly, nonatomic) unsigned long long waypointsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)additionalActionItemsType;
+ (Class)waypointsType;

- (BOOL)readFrom:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addWaypoints:(id)a0;
- (void)clearWaypoints;
- (id)waypointsAtIndex:(unsigned long long)a0;
- (int)StringAsPhase:(id)a0;
- (void)addAdditionalActionItems:(id)a0;
- (id)additionalActionItemsAtIndex:(unsigned long long)a0;
- (void)clearAdditionalActionItems;
- (id)phaseAsString:(int)a0;

@end
