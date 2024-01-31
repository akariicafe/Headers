@class NSString, NSUUID, NSData, NSDate, MapsSyncManagedCommunityID;

@interface MapsSyncManagedRAPRecord : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;
@property (nonatomic) short clientRevision;
@property (nonatomic, copy) NSData *rapResponse;
@property (nonatomic, retain) MapsSyncManagedCommunityID *communityID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
