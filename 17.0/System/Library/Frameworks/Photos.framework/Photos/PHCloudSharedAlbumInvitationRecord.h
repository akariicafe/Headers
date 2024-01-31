@class NSString, NSArray;

@interface PHCloudSharedAlbumInvitationRecord : PHObject

@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSString *albumGUID;
@property (readonly, nonatomic) NSString *inviteeFirstName;
@property (readonly, nonatomic) NSString *inviteeLastName;
@property (retain, nonatomic) NSString *inviteeHashedPersonID;
@property (readonly, weak, nonatomic) NSString *inviteeEmail;
@property (readonly, weak, nonatomic) NSString *inviteePhone;
@property (readonly, weak, nonatomic) NSArray *inviteeEmails;
@property (readonly, weak, nonatomic) NSArray *inviteePhones;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)identifierCode;
+ (id)fetchAllInvitationRecordsWithOptions:(id)a0;
+ (id)fetchInvitationRecordsForSharedAlbum:(id)a0;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
