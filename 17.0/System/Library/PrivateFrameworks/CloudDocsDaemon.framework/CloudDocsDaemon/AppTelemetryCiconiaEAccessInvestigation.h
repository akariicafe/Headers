@interface AppTelemetryCiconiaEAccessInvestigation : PBCodable <NSCopying> {
    struct { unsigned char curGid : 1; unsigned char curUid : 1; unsigned char protectionClass : 1; unsigned char stFlags : 1; unsigned char stGid : 1; unsigned char stMode : 1; unsigned char stUid : 1; unsigned char hasAcls : 1; } _has;
}

@property (nonatomic) BOOL hasStMode;
@property (nonatomic) int stMode;
@property (nonatomic) BOOL hasStUid;
@property (nonatomic) int stUid;
@property (nonatomic) BOOL hasStGid;
@property (nonatomic) int stGid;
@property (nonatomic) BOOL hasStFlags;
@property (nonatomic) unsigned int stFlags;
@property (nonatomic) BOOL hasProtectionClass;
@property (nonatomic) int protectionClass;
@property (nonatomic) BOOL hasHasAcls;
@property (nonatomic) BOOL hasAcls;
@property (nonatomic) BOOL hasCurUid;
@property (nonatomic) int curUid;
@property (nonatomic) BOOL hasCurGid;
@property (nonatomic) int curGid;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
