@class NSString, NSPersonNameComponents;

@interface PHShareParticipant : PHObject

@property (readonly, nonatomic) unsigned short role;
@property (readonly, nonatomic) short permission;
@property (readonly, nonatomic) short acceptanceStatus;
@property (readonly, nonatomic) short exitState;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *participantID;

+ (id)fetchType;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)identifierCode;
+ (id)fetchContributorsForAsset:(id)a0 options:(id)a1;
+ (id)fetchContributorsForAssets:(id)a0 options:(id)a1;
+ (id)fetchParticipantsInShare:(id)a0 options:(id)a1;
+ (id)fetchParticipantsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchShareParticipantForPerson:(id)a0 options:(id)a1;
+ (id)localIdentifierWithUUID:(id)a0;
+ (void)queryParticipantsWithEmails:(id)a0 phoneNumbers:(id)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
