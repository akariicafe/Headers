@class NSString, NSNumber, NSSet;

@interface _DKSourceMO : NSManagedObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *deviceID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *sourceID;
@property (copy, nonatomic) NSString *intentID;
@property (copy, nonatomic) NSNumber *userID;
@property (retain, nonatomic) NSSet *product;

+ (id)fetchRequest;

@end
