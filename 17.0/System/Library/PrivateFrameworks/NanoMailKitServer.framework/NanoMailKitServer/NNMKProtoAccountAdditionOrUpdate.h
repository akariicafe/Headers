@class NSString, NSMutableArray;

@interface NNMKProtoAccountAdditionOrUpdate : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char shouldArchive : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasAccountId;
@property (retain, nonatomic) NSString *accountId;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasShouldArchive;
@property (nonatomic) BOOL shouldArchive;
@property (retain, nonatomic) NSMutableArray *emails;
@property (retain, nonatomic) NSMutableArray *mailboxes;
@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDefaultEmail;
@property (retain, nonatomic) NSString *defaultEmail;
@property (readonly, nonatomic) BOOL hasUsername;
@property (retain, nonatomic) NSString *username;
@property (readonly, nonatomic) BOOL hasLocalId;
@property (retain, nonatomic) NSString *localId;
@property (readonly, nonatomic) BOOL hasParentId;
@property (retain, nonatomic) NSString *parentId;
@property (readonly, nonatomic) BOOL hasTypeIdentifier;
@property (retain, nonatomic) NSString *typeIdentifier;
@property (readonly, nonatomic) BOOL hasEmailAddressToken;
@property (retain, nonatomic) NSString *emailAddressToken;
@property (readonly, nonatomic) BOOL hasPccEmailAddress;
@property (retain, nonatomic) NSString *pccEmailAddress;

+ (Class)emailType;
+ (Class)mailboxesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearEmails;
- (unsigned long long)emailsCount;
- (id)emailAtIndex:(unsigned long long)a0;
- (void)addEmail:(id)a0;
- (void)addMailboxes:(id)a0;
- (void)clearMailboxes;
- (id)mailboxesAtIndex:(unsigned long long)a0;
- (unsigned long long)mailboxesCount;

@end
