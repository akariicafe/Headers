@class NSUUID, NSData, NSString;

@interface GroupKitCryptoGroupSeed : NSManagedObject

@property (nonatomic, copy) NSUUID *dedupeID;
@property (nonatomic, copy) NSUUID *groupID;
@property (nonatomic) long long groupVersion;
@property (nonatomic, copy) NSData *rawData;
@property (nonatomic) long long seedType;
@property (nonatomic, copy) NSString *userID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
