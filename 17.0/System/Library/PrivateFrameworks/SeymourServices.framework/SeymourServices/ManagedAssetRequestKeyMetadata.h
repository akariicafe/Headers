@class NSString, NSDate;

@interface ManagedAssetRequestKeyMetadata : NSManagedObject

@property (nonatomic) BOOL canFreeDeviceSlot;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *masterPlaylist;
@property (nonatomic, copy) NSDate *renewDate;
@property (nonatomic, copy) NSString *slotIdentifier;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic) int version;
@property (nonatomic, copy) NSString *workoutIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
