@class NSString;

@interface SGM2HarvestCostBreakdown : PBCodable <NSCopying> {
    struct { unsigned char documentSource : 1; unsigned char significantWork : 1; } _has;
}

@property (nonatomic) BOOL hasDocumentSource;
@property (nonatomic) int documentSource;
@property (readonly, nonatomic) BOOL hasComponentName;
@property (retain, nonatomic) NSString *componentName;
@property (nonatomic) BOOL hasSignificantWork;
@property (nonatomic) BOOL significantWork;

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
- (int)StringAsDocumentSource:(id)a0;
- (id)documentSourceAsString:(int)a0;

@end
