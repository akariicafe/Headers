@class NSString, NSMutableArray;

@interface ATXPBLightweightClientModelCacheUpdate : PBCodable <NSCopying> {
    struct { unsigned char cacheCreationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSMutableArray *suggestions;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (nonatomic) BOOL hasCacheCreationDate;
@property (nonatomic) double cacheCreationDate;

+ (Class)suggestionsType;

- (unsigned long long)hash;
- (void)clearSuggestions;
- (BOOL)readFrom:(id)a0;
- (void)addSuggestions:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)suggestionsAtIndex:(unsigned long long)a0;
- (unsigned long long)suggestionsCount;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
