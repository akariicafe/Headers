@class NSData;

@interface ANCSchemaANCBackgroundContent : SISchemaInstrumentationMessage {
    struct { unsigned char mediaType : 1; unsigned char isFocusModeEnabled : 1; } _has;
}

@property (nonatomic) int mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL isFocusModeEnabled;
@property (nonatomic) BOOL hasIsFocusModeEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteMediaType;
- (void)deleteIsFocusModeEnabled;

@end
