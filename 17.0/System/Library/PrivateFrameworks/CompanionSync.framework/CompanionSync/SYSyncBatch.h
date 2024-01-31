@class SYMessageHeader, NSString, NSMutableArray;

@interface SYSyncBatch : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *sessionID;
@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSMutableArray *changes;

+ (Class)changesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)changesCount;
- (id)description;
- (void).cxx_destruct;
- (void)addChanges:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)changesAtIndex:(unsigned long long)a0;
- (void)clearChanges;

@end
