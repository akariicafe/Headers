@class SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUINTERNALQUERYREWRITEQRResponse : PBCodable <NSCopying> {
    struct { unsigned char repetitionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *requestId;
@property (retain, nonatomic) NSMutableArray *qrHypotheses;
@property (nonatomic) BOOL hasRepetitionType;
@property (nonatomic) int repetitionType;
@property (retain, nonatomic) NSMutableArray *rewriteHypotheses;

+ (Class)qrHypothesesType;
+ (Class)rewriteHypothesesType;

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
- (int)StringAsRepetitionType:(id)a0;
- (void)addQrHypotheses:(id)a0;
- (void)addRewriteHypotheses:(id)a0;
- (void)clearQrHypotheses;
- (void)clearRewriteHypotheses;
- (id)qrHypothesesAtIndex:(unsigned long long)a0;
- (unsigned long long)qrHypothesesCount;
- (id)repetitionTypeAsString:(int)a0;
- (id)rewriteHypothesesAtIndex:(unsigned long long)a0;
- (unsigned long long)rewriteHypothesesCount;

@end
