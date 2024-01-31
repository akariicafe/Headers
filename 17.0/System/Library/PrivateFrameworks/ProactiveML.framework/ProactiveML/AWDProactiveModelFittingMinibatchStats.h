@class NSMutableArray;

@interface AWDProactiveModelFittingMinibatchStats : PBCodable <NSCopying> {
    struct { unsigned char batchSize : 1; unsigned char support : 1; } _has;
}

@property (nonatomic) BOOL hasSupport;
@property (nonatomic) float support;
@property (nonatomic) BOOL hasBatchSize;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSMutableArray *perLabelSupports;

+ (Class)perLabelSupportType;
+ (id)statsWithPerLabelCounts:(id)a0;
+ (id)statsWithSize:(unsigned long long)a0 support:(float)a1;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)combineWithStats:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)toDictionary;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPerLabelSupport:(id)a0;
- (void)clearPerLabelSupports;
- (id)perLabelSupportAtIndex:(unsigned long long)a0;
- (unsigned long long)perLabelSupportsCount;
- (float)supportForLabel:(unsigned long long)a0;

@end
