@class NSUUID, NSString, NSData, NSDate, NSURL;

@interface SMContactMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSData *allowReadToken;
@property (copy, nonatomic) NSData *safetyCacheKey;
@property (copy, nonatomic) NSDate *syncDate;
@property (copy, nonatomic) NSData *sharingInvitationData;
@property (copy, nonatomic) NSURL *shareURL;
@property (copy, nonatomic) NSString *participantID;

+ (id)fetchRequest;

@end
