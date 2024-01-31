@class NSString, NSSet, NSDate, NSNumber, SFNetworkAttachment;

@interface SFFlow : NSManagedObject

@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSString *remoteID;
@property (copy, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) NSSet *hasLivePerformance;
@property (retain, nonatomic) SFNetworkAttachment *onNetwork;

+ (id)entityName;
+ (id)fetchRequest;

@end
