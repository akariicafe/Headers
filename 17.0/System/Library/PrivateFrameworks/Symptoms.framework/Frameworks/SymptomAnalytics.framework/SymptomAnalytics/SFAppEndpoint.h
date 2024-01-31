@class NSData, SFApp, NSDate;

@interface SFAppEndpoint : NSManagedObject

@property (nonatomic) int effectiveUserId;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSData *endpointSet;
@property (retain, nonatomic) SFApp *hasApp;

+ (id)entityName;
+ (id)fetchRequest;

@end
