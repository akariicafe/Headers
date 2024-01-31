@class NSData, NSString;

@interface SYUserActivityRecord : NSManagedObject

@property (retain, nonatomic) NSData *userActivityData;
@property (copy, nonatomic) NSString *relatedUniqueIdentifier;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;

+ (id)createFetchRequest;

@end
