@class CKDPRecordFieldIdentifier, NSMutableArray;

@interface CKDPRequestedListField : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasFieldId;
@property (retain, nonatomic) CKDPRecordFieldIdentifier *fieldId;
@property (retain, nonatomic) NSMutableArray *ranges;

+ (Class)rangeType;

- (void)_CKLogToFileHandle:(id)a0 atDepth:(int)a1;
- (unsigned long long)hash;
- (id)rangeAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void)addRange:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearRanges;
- (unsigned long long)rangesCount;

@end
