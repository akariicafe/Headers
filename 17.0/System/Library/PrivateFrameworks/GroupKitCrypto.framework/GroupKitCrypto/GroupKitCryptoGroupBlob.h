@class NSData, NSUUID, NSString;

@interface GroupKitCryptoGroupBlob : NSManagedObject

@property (nonatomic, copy) NSData *blobData;
@property (nonatomic, copy) NSUUID *dedupeID;
@property (nonatomic, copy) NSUUID *groupID;
@property (nonatomic) long long groupVersion;
@property (nonatomic, copy) NSString *userID;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
