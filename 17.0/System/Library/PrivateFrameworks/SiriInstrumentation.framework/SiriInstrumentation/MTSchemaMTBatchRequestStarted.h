@class NSString, NSData;

@interface MTSchemaMTBatchRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char numParagraphs : 1; } _has;
}

@property (nonatomic) unsigned int numParagraphs;
@property (nonatomic) BOOL hasNumParagraphs;
@property (copy, nonatomic) NSString *sequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
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
- (void)deleteNumParagraphs;
- (void)deleteSequenceNumber;

@end
