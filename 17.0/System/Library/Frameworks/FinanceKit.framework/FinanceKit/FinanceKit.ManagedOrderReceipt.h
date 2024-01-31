@class NSData, NSString;

@interface FinanceKit.ManagedOrderReceipt : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *mimeType;
@property (nonatomic, copy) NSString *localizationName;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
