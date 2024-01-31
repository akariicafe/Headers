@class NSData, RemoteRecord;

@interface RemoteRecordData : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) RemoteRecord *parent;

- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;

@end
