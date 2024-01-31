@class NSData, USOSchemaUSOEdgeLabel;

@interface USOSchemaUSOEdge : SISchemaInstrumentationMessage {
    struct { unsigned char fromIndex : 1; unsigned char toIndex : 1; } _has;
}

@property (nonatomic) unsigned int fromIndex;
@property (nonatomic) BOOL hasFromIndex;
@property (nonatomic) unsigned int toIndex;
@property (nonatomic) BOOL hasToIndex;
@property (retain, nonatomic) USOSchemaUSOEdgeLabel *label;
@property (nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFromIndex;
- (void)deleteLabel;
- (void)deleteToIndex;

@end
