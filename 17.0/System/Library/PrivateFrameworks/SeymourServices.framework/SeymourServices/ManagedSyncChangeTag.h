@class NSString;

@interface ManagedSyncChangeTag : NSManagedObject

@property (nonatomic, copy) NSString *etag;
@property (nonatomic, copy) NSString *syncIdentifier;
@property (nonatomic, copy) NSString *zoneName;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
