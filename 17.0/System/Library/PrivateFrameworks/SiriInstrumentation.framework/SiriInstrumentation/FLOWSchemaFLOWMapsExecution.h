@class NSData;

@interface FLOWSchemaFLOWMapsExecution : SISchemaInstrumentationMessage {
    struct { unsigned char mapsFeature : 1; unsigned char mapsQueryLabel : 1; unsigned char isSearchAlongRouteRequest : 1; unsigned char isProxySearchResult : 1; unsigned char isSpellCorrected : 1; } _has;
}

@property (nonatomic) int mapsFeature;
@property (nonatomic) BOOL hasMapsFeature;
@property (nonatomic) int mapsQueryLabel;
@property (nonatomic) BOOL hasMapsQueryLabel;
@property (nonatomic) BOOL isSearchAlongRouteRequest;
@property (nonatomic) BOOL hasIsSearchAlongRouteRequest;
@property (nonatomic) BOOL isProxySearchResult;
@property (nonatomic) BOOL hasIsProxySearchResult;
@property (nonatomic) BOOL isSpellCorrected;
@property (nonatomic) BOOL hasIsSpellCorrected;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSearchAlongRouteRequest;
- (void)deleteIsProxySearchResult;
- (void)deleteIsSpellCorrected;
- (void)deleteMapsFeature;
- (void)deleteMapsQueryLabel;

@end
