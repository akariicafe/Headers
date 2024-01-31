@class NSData;

@interface NLXSchemaContextualSpanData : SISchemaInstrumentationMessage {
    struct { unsigned char isSurroundingTextMatched : 1; } _has;
}

@property (nonatomic) BOOL isSurroundingTextMatched;
@property (nonatomic) BOOL hasIsSurroundingTextMatched;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteIsSurroundingTextMatched;

@end
