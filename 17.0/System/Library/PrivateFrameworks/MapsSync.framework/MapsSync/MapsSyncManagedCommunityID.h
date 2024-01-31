@class NSString, NSUUID, NSSet, NSDate;

@interface MapsSyncManagedCommunityID : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSString *communityIdentifier;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) BOOL expired;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic) long long usedCount;
@property (nonatomic, retain) NSSet *rapRecords;
@property (nonatomic, retain) NSSet *reviewedPlaces;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
