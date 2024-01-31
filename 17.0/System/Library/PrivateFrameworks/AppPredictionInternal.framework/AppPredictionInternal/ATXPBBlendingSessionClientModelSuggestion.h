@class NSString;

@interface ATXPBBlendingSessionClientModelSuggestion : PBCodable <NSCopying> {
    struct { unsigned char rawScore : 1; unsigned char suggestedConfidenceCategory : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExecutableId;
@property (retain, nonatomic) NSString *executableId;
@property (nonatomic) BOOL hasRawScore;
@property (nonatomic) double rawScore;
@property (nonatomic) BOOL hasSuggestedConfidenceCategory;
@property (nonatomic) int suggestedConfidenceCategory;

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
- (int)StringAsSuggestedConfidenceCategory:(id)a0;
- (id)suggestedConfidenceCategoryAsString:(int)a0;

@end
