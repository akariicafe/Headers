@class NSUUID, SMUpperBoundEta, NSDate;

@interface SMTriggerDestinationState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *lastLockDate;
@property (retain, nonatomic) NSDate *lastUnlockDate;
@property (nonatomic) unsigned long long predominantModeOfTransport;
@property (nonatomic) unsigned long long currentStatus;
@property (retain, nonatomic) NSDate *roundTripReminderDate;
@property (retain, nonatomic) NSDate *timeToUpdateStatus;
@property (retain, nonatomic) SMUpperBoundEta *upperBoundEta;
@property (nonatomic) double mapsExpectedTravelTime;
@property (nonatomic) double remainingDistance;
@property (nonatomic) BOOL shouldRetryETAQuery;
@property (nonatomic) unsigned short numberOfETARetries;
@property (nonatomic) BOOL dirty;

+ (id)statusToString:(unsigned long long)a0;
+ (id)convertMKDirectionTransportTypeToString:(unsigned long long)a0;
+ (id)modeOfTransportToString:(unsigned long long)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSessionIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)markDirty;
- (id)initWithSessionIdentifier:(id)a0 currentStatus:(unsigned long long)a1 lastLockDate:(id)a2 lastUnlockDate:(id)a3 predominantModeOfTransport:(unsigned long long)a4 numberOfETARetries:(unsigned short)a5 shouldRetryETAQuery:(BOOL)a6 roundTripReminderDate:(id)a7 timeToUpdateStatus:(id)a8 upperBoundEta:(id)a9 mapsExpectedTravelTime:(double)a10 remainingDistance:(double)a11 date:(id)a12;

@end
