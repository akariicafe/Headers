@class NSString, NSData;

@interface SISchemaSpeechTranscription : SISchemaInstrumentationMessage {
    struct { unsigned char speechTranscriptionType : 1; } _has;
}

@property (copy, nonatomic) NSString *aceID;
@property (nonatomic) BOOL hasAceID;
@property (nonatomic) int speechTranscriptionType;
@property (nonatomic) BOOL hasSpeechTranscriptionType;
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
- (void)deleteAceID;
- (void)deleteSpeechTranscriptionType;

@end
