@class NSString, RemoteRecordData, NSDate;

@interface RemoteRecord : NSManagedObject

@property (nonatomic, copy) NSString *changeTag;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSDate *dateRead;
@property (nonatomic, copy) NSString *guid;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *modifiedByDevice;
@property (nonatomic, copy) NSString *recordName;
@property (nonatomic, copy) NSString *recordType;
@property (nonatomic) int statusValue;
@property (nonatomic, copy) NSString *zoneName;
@property (nonatomic, retain) RemoteRecordData *data;

- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_destruct;

@end
