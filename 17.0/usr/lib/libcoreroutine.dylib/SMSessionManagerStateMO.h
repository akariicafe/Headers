@class SMSessionConfigurationMO, NSString, NSUUID, NSData, NSDate, SMSessionManagerStatusMO;

@interface SMSessionManagerStateMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (nonatomic) double locationLatitude;
@property (nonatomic) double locationLongitude;
@property (nonatomic) short sessionState;
@property (nonatomic) short triggerCategory;
@property (nonatomic) short updateReason;
@property (nonatomic) short userTriggerResponse;
@property (copy, nonatomic) NSData *allowReadToken;
@property (copy, nonatomic) NSData *safetyCacheKey;
@property (copy, nonatomic) NSString *startMessageGUID;
@property (copy, nonatomic) NSString *scheduledSendMessageGUID;
@property (copy, nonatomic) NSDate *scheduledSendMessageDate;
@property (retain, nonatomic) SMSessionConfigurationMO *sessionConfiguration;
@property (copy, nonatomic) NSUUID *activeDeviceIdentifier;
@property (copy, nonatomic) NSDate *estimatedEndDate;
@property (nonatomic) short estimatedEndDateStatus;
@property (nonatomic) short sessionEndReason;
@property (copy, nonatomic) NSDate *coarseEstimatedEndDate;
@property (copy, nonatomic) NSDate *sessionStateTransitionDate;
@property (retain, nonatomic) SMSessionManagerStatusMO *sessionStatus;
@property (copy, nonatomic) NSUUID *activePairedDeviceIdentifier;

+ (id)fetchRequest;
+ (id)initWithSessionManagerState:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithSessionManagerConfiguration:(id)a0 sessionState:(unsigned long long)a1 triggerCateogry:(unsigned long long)a2 updateReason:(unsigned long long)a3 userTriggerResponse:(long long)a4 date:(id)a5 location:(id)a6 allowReadToken:(id)a7 safetyCacheKey:(id)a8 startMessageGUID:(id)a9 scheduledSendMessageGUID:(id)a10 scheduledSendMessageDate:(id)a11 activeDeviceIdentifier:(id)a12 estimatedEndDate:(id)a13 coarseEstimatedEndDate:(id)a14 estimatedEndDateStatus:(unsigned long long)a15 sessionEndReason:(unsigned long long)a16 sessionStateTransitionDate:(id)a17 activePairedDeviceIdentifier:(id)a18 managedObjectContext:(id)a19;

@end
