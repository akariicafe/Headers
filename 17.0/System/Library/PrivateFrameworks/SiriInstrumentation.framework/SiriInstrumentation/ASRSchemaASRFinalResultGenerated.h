@class NSArray, NSData;

@interface ASRSchemaASRFinalResultGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char isAfterResume : 1; } _has;
}

@property (copy, nonatomic) NSArray *tokenSilenceStartTimeInNsLists;
@property (copy, nonatomic) NSArray *correctPartialResultIndexLists;
@property (nonatomic) BOOL isAfterResume;
@property (nonatomic) BOOL hasIsAfterResume;
@property (copy, nonatomic) NSArray *correctAlignedPartialResultIndexLists;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addCorrectAlignedPartialResultIndexList:(int)a0;
- (void)addCorrectPartialResultIndexList:(int)a0;
- (void)addTokenSilenceStartTimeInNsList:(unsigned long long)a0;
- (void)clearCorrectAlignedPartialResultIndexList;
- (void)clearCorrectPartialResultIndexList;
- (void)clearTokenSilenceStartTimeInNsList;
- (int)correctAlignedPartialResultIndexListAtIndex:(unsigned long long)a0;
- (unsigned long long)correctAlignedPartialResultIndexListCount;
- (int)correctPartialResultIndexListAtIndex:(unsigned long long)a0;
- (unsigned long long)correctPartialResultIndexListCount;
- (void)deleteCorrectAlignedPartialResultIndexList;
- (void)deleteCorrectPartialResultIndexList;
- (void)deleteIsAfterResume;
- (void)deleteTokenSilenceStartTimeInNsList;
- (unsigned long long)tokenSilenceStartTimeInNsListAtIndex:(unsigned long long)a0;
- (unsigned long long)tokenSilenceStartTimeInNsListCount;

@end
