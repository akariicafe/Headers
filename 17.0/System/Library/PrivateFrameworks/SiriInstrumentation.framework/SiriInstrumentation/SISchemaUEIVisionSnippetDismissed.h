@class NSData;

@interface SISchemaUEIVisionSnippetDismissed : SISchemaInstrumentationMessage {
    struct { unsigned char startLocation : 1; unsigned char wasMoved : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) int startLocation;
@property (nonatomic) BOOL hasStartLocation;
@property (nonatomic) BOOL wasMoved;
@property (nonatomic) BOOL hasWasMoved;
@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteReason;
- (void)deleteStartLocation;
- (void)deleteWasMoved;

@end
