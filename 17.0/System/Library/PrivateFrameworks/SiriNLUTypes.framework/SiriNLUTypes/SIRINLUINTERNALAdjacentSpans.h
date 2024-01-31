@class NSString, NSMutableArray;

@interface SIRINLUINTERNALAdjacentSpans : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasCaptureGroupName;
@property (retain, nonatomic) NSString *captureGroupName;
@property (retain, nonatomic) NSMutableArray *spans;

+ (Class)spansType;

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
- (void)clearSpans;
- (unsigned long long)spansCount;
- (void)addSpans:(id)a0;
- (id)spansAtIndex:(unsigned long long)a0;

@end
