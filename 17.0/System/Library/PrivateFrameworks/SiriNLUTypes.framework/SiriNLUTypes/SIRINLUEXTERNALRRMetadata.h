@class SIRINLUEXTERNALRRBoundingBox, NSMutableArray;

@interface SIRINLUEXTERNALRRMetadata : PBCodable <NSCopying> {
    struct { unsigned char dataSource : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBoundingBox;
@property (retain, nonatomic) SIRINLUEXTERNALRRBoundingBox *boundingBox;
@property (retain, nonatomic) NSMutableArray *surroundingTexts;
@property (nonatomic) BOOL hasDataSource;
@property (nonatomic) int dataSource;

+ (Class)surroundingTextsType;

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
- (int)StringAsDataSource:(id)a0;
- (void)addSurroundingTexts:(id)a0;
- (void)clearSurroundingTexts;
- (id)dataSourceAsString:(int)a0;
- (id)surroundingTextsAtIndex:(unsigned long long)a0;
- (unsigned long long)surroundingTextsCount;

@end
