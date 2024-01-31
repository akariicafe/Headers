@class NSString, NSMutableArray;

@interface AWDCoreRoutineMagicMomentsSuggestionInstance : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char confidence : 1; unsigned char durationSinceLastSuggestion : 1; unsigned char reposponceTime : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasSuggestionId;
@property (retain, nonatomic) NSString *suggestionId;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) int confidence;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (nonatomic) BOOL hasReposponceTime;
@property (nonatomic) int reposponceTime;
@property (nonatomic) BOOL hasDurationSinceLastSuggestion;
@property (nonatomic) int durationSinceLastSuggestion;

+ (Class)suggestionsType;

- (unsigned long long)hash;
- (void)dealloc;
- (void)clearSuggestions;
- (BOOL)readFrom:(id)a0;
- (void)addSuggestions:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionsCount;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
