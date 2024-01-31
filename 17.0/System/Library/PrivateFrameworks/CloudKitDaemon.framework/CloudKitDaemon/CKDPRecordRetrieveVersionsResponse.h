@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {
    struct { unsigned char isDeleted : 1; } _has;
}

@property (nonatomic) BOOL hasIsDeleted;
@property (nonatomic) BOOL isDeleted;
@property (retain, nonatomic) NSMutableArray *recordVersions;

+ (Class)recordVersionsType;

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
- (void)addRecordVersions:(id)a0;
- (void)clearRecordVersions;
- (id)recordVersionsAtIndex:(unsigned long long)a0;
- (unsigned long long)recordVersionsCount;

@end
