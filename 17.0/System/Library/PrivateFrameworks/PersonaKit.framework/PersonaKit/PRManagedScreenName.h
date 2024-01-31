@class NSString, NSDate;

@interface PRManagedScreenName : NSManagedObject

@property (retain, nonatomic) NSDate *expiration;
@property (retain, nonatomic) NSString *ownerID;
@property (retain, nonatomic) NSString *value;

@end
