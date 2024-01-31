@class NSMutableArray;

@interface SIRINLUINTERNALOvertonKGSpanData : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (retain, nonatomic) NSMutableArray *features;

+ (Class)featuresType;

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
- (void)clearFeatures;
- (unsigned long long)featuresCount;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void)addFeatures:(id)a0;

@end
