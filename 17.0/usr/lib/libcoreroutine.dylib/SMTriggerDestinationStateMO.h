@class NSUUID, NSDate;

@interface SMTriggerDestinationStateMO : NSManagedObject

@property (nonatomic) short currentStatus;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSDate *lastLockDate;
@property (copy, nonatomic) NSDate *lastUnlockDate;
@property (nonatomic) double mapsExpectedTravelTime;
@property (nonatomic) short numberOfETARetries;
@property (nonatomic) long long predominantModeOfTransport_v2;
@property (nonatomic) double remainingDistance;
@property (copy, nonatomic) NSDate *roundTripReminderDate;
@property (copy, nonatomic) NSUUID *sessionIdentifier_v2;
@property (nonatomic) BOOL shouldRetryETAQuery;
@property (copy, nonatomic) NSDate *timeToUpdateStatus;
@property (copy, nonatomic) NSDate *upperBoundEtaCrowFliesUpperBoundEta;
@property (copy, nonatomic) NSDate *upperBoundEtaMapsUpperBoundEta;

+ (id)fetchRequest;
+ (id)initWithTriggerDestinationState:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithSessionIdentifier:(id)a0 lastLockDate:(id)a1 lastUnlockDate:(id)a2 predominantModeOfTransport:(unsigned long long)a3 currentStatus:(unsigned long long)a4 date:(id)a5 shouldRetryETAQuery:(BOOL)a6 numberOfETARetries:(unsigned short)a7 upperBoundEtaCrowFliesUpperBoundEta:(id)a8 upperBoundEtaMapsUpperBoundEta:(id)a9 roundTripReminderDate:(id)a10 timeToUpdateStatus:(id)a11 mapsExpectedTravelTime:(double)a12 remainingDistance:(double)a13 managedObjectContext:(id)a14;

@end
