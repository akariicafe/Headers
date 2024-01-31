@class NSString;

@interface CustomCategory : NSManagedObject

@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *category;

+ (id)fetchRequest;

@end
