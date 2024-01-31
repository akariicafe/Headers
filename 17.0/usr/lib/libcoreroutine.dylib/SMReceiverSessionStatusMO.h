@class NSUUID, NSString, NSData, NSDate, NSArray, SMReceiverContactMO;

@interface SMReceiverSessionStatusMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSDate *cacheExpiryDate;
@property (copy, nonatomic) NSDate *cacheRequestDate;
@property (nonatomic) short triggerType;
@property (copy, nonatomic) NSDate *triggerDate;
@property (retain, nonatomic) NSData *destinationMapItem;
@property (nonatomic) short destinationType;
@property (copy, nonatomic) NSDate *estimatedEndDate;
@property (copy, nonatomic) NSDate *sessionStartDate;
@property (nonatomic) short sessionType;
@property (nonatomic) BOOL zoneShareAccepted;
@property (nonatomic) short sessionState;
@property (copy, nonatomic) NSString *initiatorPrimaryHandle;
@property (retain, nonatomic) NSArray *initiatorSecondaryHandles;
@property (copy, nonatomic) NSString *receiverHandle;
@property (copy, nonatomic) NSUUID *sessionID;
@property (copy, nonatomic) NSDate *lastUpdateDate;
@property (nonatomic) double locationOfTriggerLatitude;
@property (nonatomic) double locationOfTriggerLongitude;
@property (nonatomic) double locationOfTriggerHorizontalUncertainty;
@property (nonatomic) double locationOfTriggerAltitude;
@property (nonatomic) double locationOfTriggerVerticalUncertainty;
@property (copy, nonatomic) NSDate *locationOfTriggerDate;
@property (nonatomic) short locationOfTriggerSourceAccuracy;
@property (nonatomic) double locationOfTriggerSpeed;
@property (nonatomic) short locationOfTriggerReferenceFrame;
@property (nonatomic) short sessionEndReason;
@property (retain, nonatomic) SMReceiverContactMO *contact;
@property (copy, nonatomic) NSDate *lastSessionStartInfoRequestDate;
@property (nonatomic) short sessionStartInfoRequestCount;
@property (copy, nonatomic) NSDate *lastKeyReleaseInfoRequestDate;
@property (nonatomic) short keyReleaseInfoRequestCount;
@property (copy, nonatomic) NSDate *coarseEstimatedEndDate;
@property (nonatomic) BOOL isSOSTrigger;

+ (id)fetchRequest;
+ (id)managedObjectWithReceiverSessionStatus:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithReceiverSessionStatus:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
