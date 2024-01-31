@class NSURL, NSString;

@interface FinanceKit.ManagedOrderApplication : NSManagedObject

@property (nonatomic) long long storeIdentifier;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic, copy) NSString *customProductPageIdentifier;
@property (nonatomic) short positionIndex;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
