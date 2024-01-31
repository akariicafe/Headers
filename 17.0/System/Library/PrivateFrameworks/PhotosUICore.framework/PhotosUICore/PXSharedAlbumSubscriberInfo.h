@class NSString, PLCloudSharedAlbumInvitationRecord;

@interface PXSharedAlbumSubscriberInfo : NSObject

@property (readonly, retain, nonatomic) PLCloudSharedAlbumInvitationRecord *invitationRecord;
@property (readonly, nonatomic) BOOL isOwner;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *email;
@property (readonly, nonatomic) NSString *phone;
@property (readonly, nonatomic) NSString *firstName;
@property (readonly, nonatomic) NSString *lastName;
@property (readonly, nonatomic) NSString *displayName;

+ (id)_allSubscribersForAlbum:(id)a0 includeMyself:(BOOL)a1;
+ (id)allSubscribersForAlbum:(id)a0;
+ (id)allSubscribersForAlbumWithObjectID:(id)a0 includingCurrentUser:(BOOL)a1 managedObjectContext:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInvitationRecord:(id)a0 identifier:(id)a1 email:(id)a2 phone:(id)a3 firstName:(id)a4 lastName:(id)a5 displayName:(id)a6 isOwner:(BOOL)a7;
- (id)matchingContactWithKeysToFetch:(id)a0 outMatchingKey:(id *)a1 outMatchingIdentifier:(id *)a2;

@end
