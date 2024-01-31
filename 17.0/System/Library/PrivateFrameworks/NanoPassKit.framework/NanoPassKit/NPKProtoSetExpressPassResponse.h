@class NSString, NSMutableArray, NSData;

@interface NPKProtoSetExpressPassResponse : PBCodable <NSCopying> {
    struct { unsigned char cancelled : 1; unsigned char needsUnlock : 1; unsigned char pending : 1; unsigned char success : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL hasNeedsUnlock;
@property (nonatomic) BOOL needsUnlock;
@property (readonly, nonatomic) BOOL hasActualUniqueID;
@property (retain, nonatomic) NSString *actualUniqueID;
@property (retain, nonatomic) NSMutableArray *currentUniqueIDs;
@property (readonly, nonatomic) BOOL hasActualExpressPassInformation;
@property (retain, nonatomic) NSData *actualExpressPassInformation;
@property (retain, nonatomic) NSMutableArray *currentExpressPassesInformations;

+ (Class)currentExpressPassesInformationType;
+ (Class)currentUniqueIDsType;

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
- (void)addCurrentExpressPassesInformation:(id)a0;
- (void)addCurrentUniqueIDs:(id)a0;
- (void)clearCurrentExpressPassesInformations;
- (void)clearCurrentUniqueIDs;
- (id)currentExpressPassesInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)currentExpressPassesInformationsCount;
- (id)currentUniqueIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)currentUniqueIDsCount;

@end
