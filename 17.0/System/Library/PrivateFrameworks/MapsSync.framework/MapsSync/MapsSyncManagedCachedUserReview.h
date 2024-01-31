@class NSUUID, NSDate;

@interface MapsSyncManagedCachedUserReview : NSManagedObject

@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long muid;
@property (nonatomic) int numberPhotosUploaded;
@property (nonatomic) long long positionIndex;
@property (nonatomic) short rating;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
