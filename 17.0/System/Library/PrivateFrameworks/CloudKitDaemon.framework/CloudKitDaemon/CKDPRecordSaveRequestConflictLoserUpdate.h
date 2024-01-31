@class NSMutableArray;

@interface CKDPRecordSaveRequestConflictLoserUpdate : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *conflictLoserEtags;

+ (Class)conflictLoserEtagsType;

- (void)addConflictLoserEtags:(id)a0;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)conflictLoserEtagsCount;
- (void)clearConflictLoserEtags;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
