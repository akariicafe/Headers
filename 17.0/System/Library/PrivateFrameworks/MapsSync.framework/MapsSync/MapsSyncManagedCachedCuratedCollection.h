@class NSString, NSUUID, NSData, NSDate;

@interface MapsSyncManagedCachedCuratedCollection : NSManagedObject

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) long long curatedCollectionIdentifier;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic) BOOL isTombstone;
@property (nonatomic, copy) NSDate *lastFetchedDate;
@property (nonatomic, copy) NSDate *lastSignificantChangeDate;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) int placesCount;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSString *publisherAttribution;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *titleLocale;
@property (nonatomic) int resultProviderIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
