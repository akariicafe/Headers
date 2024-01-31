@class NSString, NSUUID, NSData;

@interface ManagedSyncEncryptionKey : NSManagedObject

@property (nonatomic, copy) NSString *etag;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *key;
@property (nonatomic, copy) NSString *zoneName;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
