@class NSData, NSMutableArray;

@interface CKDPFetchArchivedRecordsResponse : PBCodable <NSCopying> {
    struct { unsigned char status : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (readonly, nonatomic) BOOL hasArchiveContinuationToken;
@property (retain, nonatomic) NSData *archiveContinuationToken;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) int status;

+ (Class)recordType;

- (id)statusAsString:(int)a0;
- (void)addRecord:(id)a0;
- (int)StringAsStatus:(id)a0;
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
- (void)clearRecords;
- (unsigned long long)recordsCount;
- (id)recordAtIndex:(unsigned long long)a0;

@end
