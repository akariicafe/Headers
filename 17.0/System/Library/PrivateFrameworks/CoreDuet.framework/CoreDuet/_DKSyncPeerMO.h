@class NSString, NSUUID, NSDate;

@interface _DKSyncPeerMO : NSManagedObject

@property (copy, nonatomic) NSString *cloudID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSDate *lastSeenDate;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *rapportID;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *version;

+ (id)fetchRequest;

@end
