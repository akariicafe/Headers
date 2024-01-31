@class NSData, NSMutableArray, NSString;

@interface NNMKProtoBatchedFetchResult : PBCodable <NSCopying> {
    struct { unsigned char fullSyncVersion : 1; unsigned char mailboxSyncVersion : 1; unsigned char shouldTrimDatabase : 1; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (retain, nonatomic) NSMutableArray *messageAdditions;
@property (retain, nonatomic) NSMutableArray *messageUpdates;
@property (retain, nonatomic) NSMutableArray *messageDeletions;
@property (readonly, nonatomic) BOOL hasDateForRequestingMoreMessages;
@property (retain, nonatomic) NSData *dateForRequestingMoreMessages;
@property (nonatomic) BOOL hasShouldTrimDatabase;
@property (nonatomic) BOOL shouldTrimDatabase;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;

+ (Class)messageAdditionType;
+ (Class)messageDeletionType;
+ (Class)messageUpdateType;

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
- (void)addMessageAddition:(id)a0;
- (void)addMessageDeletion:(id)a0;
- (void)addMessageUpdate:(id)a0;
- (void)clearMessageAdditions;
- (void)clearMessageDeletions;
- (void)clearMessageUpdates;
- (id)messageAdditionAtIndex:(unsigned long long)a0;
- (unsigned long long)messageAdditionsCount;
- (id)messageDeletionAtIndex:(unsigned long long)a0;
- (unsigned long long)messageDeletionsCount;
- (id)messageUpdateAtIndex:(unsigned long long)a0;
- (unsigned long long)messageUpdatesCount;

@end
