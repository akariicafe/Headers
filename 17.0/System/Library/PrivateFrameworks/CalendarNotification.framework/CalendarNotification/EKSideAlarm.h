@class NSString, NSNumber, NSDate;

@interface EKSideAlarm : NSManagedObject

@property (retain, nonatomic) NSDate *fireTime;
@property (retain, nonatomic) NSString *entityURI;
@property (retain, nonatomic) NSNumber *entityID;
@property (retain, nonatomic) NSNumber *alarmID;
@property (retain, nonatomic) NSNumber *databaseID;
@property (retain, nonatomic) NSDate *entityDate;
@property (retain, nonatomic) NSString *entityTimeZone;
@property (retain, nonatomic) NSNumber *allDay;
@property (retain, nonatomic) NSNumber *isDelayedProximityAlarm;
@property (retain, nonatomic) NSString *externalID;
@property (retain, nonatomic) NSDate *acknowledgedDate;
@property (retain, nonatomic) NSNumber *refiring;

@end
