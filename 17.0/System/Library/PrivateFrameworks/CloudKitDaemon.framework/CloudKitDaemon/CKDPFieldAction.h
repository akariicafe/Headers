@class CKDPFieldActionReplaceListRange, CKDPFieldActionInsertIntoList, CKDPFieldActionDeleteListRange;

@interface CKDPFieldAction : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasInsertIntoList;
@property (retain, nonatomic) CKDPFieldActionInsertIntoList *insertIntoList;
@property (readonly, nonatomic) BOOL hasDeleteListRange;
@property (retain, nonatomic) CKDPFieldActionDeleteListRange *deleteListRange;
@property (readonly, nonatomic) BOOL hasReplaceListRange;
@property (retain, nonatomic) CKDPFieldActionReplaceListRange *replaceListRange;

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

@end
