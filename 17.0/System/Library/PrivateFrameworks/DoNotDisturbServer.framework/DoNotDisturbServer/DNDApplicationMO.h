@class NSString, NSSet;

@interface DNDApplicationMO : NSManagedObject

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (retain, nonatomic) NSSet *settings;

+ (id)fetchRequest;

@end
