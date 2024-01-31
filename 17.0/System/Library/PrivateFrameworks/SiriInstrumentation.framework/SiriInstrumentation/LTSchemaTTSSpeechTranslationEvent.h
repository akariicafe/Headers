@class NSString, NSData;

@interface LTSchemaTTSSpeechTranslationEvent : SISchemaInstrumentationMessage {
    struct { unsigned char responseTimeMs : 1; unsigned char playbackBeginTimeMs : 1; } _has;
}

@property (copy, nonatomic) NSString *requestID;
@property (nonatomic) BOOL hasRequestID;
@property (copy, nonatomic) NSString *selectedLocale;
@property (nonatomic) BOOL hasSelectedLocale;
@property (nonatomic) unsigned int responseTimeMs;
@property (nonatomic) BOOL hasResponseTimeMs;
@property (nonatomic) unsigned int playbackBeginTimeMs;
@property (nonatomic) BOOL hasPlaybackBeginTimeMs;
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
- (void)deleteRequestID;
- (void)deletePlaybackBeginTimeMs;
- (void)deleteResponseTimeMs;
- (void)deleteSelectedLocale;

@end
