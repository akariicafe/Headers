@class NSData;

@interface SISchemaUEISiriWasUnavailable : SISchemaInstrumentationMessage {
    struct { unsigned char product : 1; unsigned char reason : 1; } _has;
}

@property (nonatomic) int product;
@property (nonatomic) BOOL hasProduct;
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
- (void)deleteProduct;

@end
