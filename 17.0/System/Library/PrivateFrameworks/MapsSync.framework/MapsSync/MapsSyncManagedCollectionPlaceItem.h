@class NSString, MapsSyncManagedMixinMapItem, NSData, NSNumber;

@interface MapsSyncManagedCollectionPlaceItem : MapsSyncManagedCollectionItem

@property (class, nonatomic, readonly) Class wrapperClass;

@property (nonatomic, copy) NSString *customName;
@property (nonatomic, copy) NSData *droppedPinCoordinate;
@property (nonatomic) int droppedPinFloorOrdinal;
@property (nonatomic) short origin;
@property (nonatomic, retain) NSNumber *muid;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, retain) MapsSyncManagedMixinMapItem *mapItem;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
