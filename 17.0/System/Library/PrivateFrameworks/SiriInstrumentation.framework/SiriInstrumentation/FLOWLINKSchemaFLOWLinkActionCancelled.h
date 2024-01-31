@class NSData;

@interface FLOWLINKSchemaFLOWLinkActionCancelled : SISchemaInstrumentationMessage {
    struct { unsigned char cancellationInitiator : 1; } _has;
}

@property (nonatomic) int cancellationInitiator;
@property (nonatomic) BOOL hasCancellationInitiator;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancellationInitiator;

@end
