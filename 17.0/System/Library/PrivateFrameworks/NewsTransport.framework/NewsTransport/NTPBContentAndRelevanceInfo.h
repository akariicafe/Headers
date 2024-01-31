@interface NTPBContentAndRelevanceInfo : PBCodable <NSCopying> {
    struct { unsigned char contentRating : 1; unsigned char relevanceRating : 1; } _has;
}

@property (nonatomic) BOOL hasContentRating;
@property (nonatomic) int contentRating;
@property (nonatomic) BOOL hasRelevanceRating;
@property (nonatomic) int relevanceRating;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
