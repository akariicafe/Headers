@class NSString, NSArray, NSData, NSDate, SMLocationMO, SMCacheMO;

@interface SMInitiatorContactMO : SMContactMO

@property (copy, nonatomic) NSString *receiverPrimaryHandle;
@property (retain, nonatomic) NSArray *receiverSecondaryHandles;
@property (copy, nonatomic) NSDate *shouldBeCleanedUpDate;
@property (nonatomic) BOOL cloudkitShareZoneCleanedUpSuccessfully;
@property (copy, nonatomic) NSDate *scheduledSendExpiryDate;
@property (copy, nonatomic) NSDate *keyReleaseMessageSendDate;
@property (retain, nonatomic) SMLocationMO *unlockLocation;
@property (retain, nonatomic) SMLocationMO *lockLocation;
@property (retain, nonatomic) SMLocationMO *startingLocation;
@property (retain, nonatomic) SMLocationMO *offWristLocation;
@property (retain, nonatomic) SMLocationMO *parkedCarLocation;
@property (retain, nonatomic) NSData *destinationMapItem;
@property (retain, nonatomic) SMCacheMO *cache;
@property (copy, nonatomic) NSString *scheduleSendMessageGUID;
@property (copy, nonatomic) NSDate *timeCacheUploadCompletion;
@property (nonatomic) double maxCacheSize;
@property (nonatomic) short maxLocationsInTrace;
@property (nonatomic) double maxTimeBetweenCacheUpdates;
@property (nonatomic) short numCacheUpdates;
@property (nonatomic) double timeTilCacheRelease;
@property (nonatomic) short numberOfSuccessfulCacheUpdates;
@property (nonatomic) short numberOfMessageCancelling;
@property (nonatomic) short numberOfSuccessfulMessageCancelling;
@property (nonatomic) short numberOfMessageScheduling;
@property (nonatomic) short numberOfSuccessfulMessageScheduling;
@property (nonatomic) BOOL wasCacheReleased;
@property (nonatomic) BOOL wasScheduledSendTriggered;
@property (nonatomic) double locationOfTriggerLatitude;
@property (nonatomic) double locationOfTriggerLongitude;
@property (nonatomic) double locationOfTriggerHorizontalUncertainty;
@property (nonatomic) double locationOfTriggerAltitude;
@property (nonatomic) double locationOfTriggerVerticalUncertainty;
@property (copy, nonatomic) NSDate *locationOfTriggerDate;
@property (nonatomic) short locationOfTriggerSourceAccuracy;
@property (nonatomic) double locationOfTriggerSpeed;
@property (nonatomic) short locationOfTriggerReferenceFrame;
@property (copy, nonatomic) NSDate *triggerDate;
@property (copy, nonatomic) NSDate *cacheUpdateBackstopExpiryDate;
@property (nonatomic) BOOL lockState;

+ (id)fetchRequest;
+ (id)getLocationMOFromLocation:(id)a0 context:(id)a1;
+ (id)managedObjectWithInitiatorContact:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithInitiatorContact:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
