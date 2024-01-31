@class NSString, HDCodableSharingSetupMetadata, NSData, NSMutableArray;

@interface HDCodableSummarySharingEntry : PBCodable <NSCopying> {
    struct { unsigned char dateAccepted : 1; unsigned char dateInvited : 1; unsigned char dateModified : 1; unsigned char direction : 1; unsigned char notificationStatus : 1; unsigned char status : 1; unsigned char type : 1; unsigned char userWheelchairMode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) BOOL hasPrimaryContactIdentifier;
@property (retain, nonatomic) NSString *primaryContactIdentifier;
@property (retain, nonatomic) NSMutableArray *allContactIdentifiers;
@property (readonly, nonatomic) BOOL hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) BOOL hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasDirection;
@property (nonatomic) int direction;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;
@property (readonly, nonatomic) BOOL hasSharingSetupMetadata;
@property (retain, nonatomic) HDCodableSharingSetupMetadata *sharingSetupMetadata;
@property (nonatomic) BOOL hasDateModified;
@property (nonatomic) double dateModified;
@property (retain, nonatomic) NSMutableArray *authorizationCategories;
@property (nonatomic) BOOL hasDateAccepted;
@property (nonatomic) double dateAccepted;
@property (nonatomic) BOOL hasDateInvited;
@property (nonatomic) double dateInvited;
@property (readonly, nonatomic) BOOL hasInvitationUUID;
@property (retain, nonatomic) NSString *invitationUUID;
@property (readonly, nonatomic) BOOL hasCloudKitIdentifier;
@property (retain, nonatomic) NSString *cloudKitIdentifier;
@property (readonly, nonatomic) BOOL hasOwnerParticipant;
@property (retain, nonatomic) NSData *ownerParticipant;
@property (nonatomic) BOOL hasNotificationStatus;
@property (nonatomic) int notificationStatus;
@property (retain, nonatomic) NSMutableArray *sharingAuthorizations;
@property (nonatomic) BOOL hasUserWheelchairMode;
@property (nonatomic) int userWheelchairMode;

+ (Class)allContactIdentifiersType;
+ (Class)authorizationCategoriesType;
+ (Class)sharingAuthorizationsType;

- (id)statusAsString:(int)a0;
- (int)StringAsStatus:(id)a0;
- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEquivalent:(id)a0;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsDirection:(id)a0;
- (id)authorizationCategoriesAtIndex:(unsigned long long)a0;
- (int)StringAsNotificationStatus:(id)a0;
- (int)StringAsUserWheelchairMode:(id)a0;
- (void)addAllContactIdentifiers:(id)a0;
- (void)addAuthorizationCategories:(id)a0;
- (void)addSharingAuthorizations:(id)a0;
- (id)allContactIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)allContactIdentifiersCount;
- (unsigned long long)authorizationCategoriesCount;
- (void)clearAllContactIdentifiers;
- (void)clearAuthorizationCategories;
- (void)clearSharingAuthorizations;
- (id)directionAsString:(int)a0;
- (id)initWithUUID:(id)a0 invitationUUID:(id)a1 cloudKitIdentifier:(id)a2 primaryContactIdentifier:(id)a3 allContactIdentifiers:(id)a4 firstName:(id)a5 lastName:(id)a6 sharingAuthorizations:(id)a7 userWheelchairMode:(long long)a8 type:(long long)a9 direction:(unsigned long long)a10 status:(long long)a11 notificationStatus:(long long)a12 dateModified:(id)a13 dateInvited:(id)a14 dateAccepted:(id)a15 setupMetadata:(id)a16 ownerParticipant:(id)a17;
- (BOOL)isEqualFirstName:(id)a0 lastName:(id)a1;
- (id)notificationStatusAsString:(int)a0;
- (id)shareOwnerParticipant;
- (id)sharingAuthorizationsAtIndex:(unsigned long long)a0;
- (unsigned long long)sharingAuthorizationsCount;
- (id)sharingEntry;
- (id)sharingRecipientIdentifier;
- (id)userWheelchairModeAsString:(int)a0;

@end
