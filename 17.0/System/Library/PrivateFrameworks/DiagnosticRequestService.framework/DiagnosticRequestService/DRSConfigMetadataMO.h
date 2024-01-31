@class NSString, NSUUID, DRConfigMO, NSDate;

@interface DRSConfigMetadataMO : NSManagedObject

@property (copy, nonatomic) NSDate *appliedDate;
@property (copy, nonatomic) NSDate *completedDate;
@property (copy, nonatomic) NSString *completionDescription;
@property (nonatomic) long long completionType;
@property (copy, nonatomic) NSUUID *configUUID;
@property (nonatomic) BOOL logTelemetry;
@property (copy, nonatomic) NSDate *receivedDate;
@property (nonatomic) BOOL reportToDecisionServer;
@property (nonatomic) short state;
@property (copy, nonatomic) NSString *teamID;
@property (retain, nonatomic) DRConfigMO *configMO;

+ (id)fetchRequest;

@end
