@class NSString, NSData, NSMutableArray;

@interface PKProtobufRelaySharingMessage : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL hasThumbnailImage;
@property (retain, nonatomic) NSData *thumbnailImage;
@property (readonly, nonatomic) BOOL hasStatus;
@property (retain, nonatomic) NSString *status;
@property (retain, nonatomic) NSMutableArray *mailboxURLs;
@property (readonly, nonatomic) BOOL hasLocalData;
@property (retain, nonatomic) NSData *localData;
@property (readonly, nonatomic) BOOL hasProvisioningCredentialHash;
@property (retain, nonatomic) NSString *provisioningCredentialHash;
@property (readonly, nonatomic) BOOL hasCarKeyReaderIdentifier;
@property (retain, nonatomic) NSString *carKeyReaderIdentifier;

+ (Class)mailboxURLsType;

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
- (void)addMailboxURLs:(id)a0;
- (void)clearMailboxURLs;
- (id)mailboxURLsAtIndex:(unsigned long long)a0;
- (unsigned long long)mailboxURLsCount;

@end
