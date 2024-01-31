@class NSData;

@interface SISchemaUEISiriCarCommandStarted : SISchemaInstrumentationMessage {
    struct { unsigned char carPlayConnection : 1; unsigned char isEnhancedSiriEnabled : 1; unsigned char isEnhancedSiriRequest : 1; } _has;
}

@property (nonatomic) int carPlayConnection;
@property (nonatomic) BOOL hasCarPlayConnection;
@property (nonatomic) BOOL isEnhancedSiriEnabled;
@property (nonatomic) BOOL hasIsEnhancedSiriEnabled;
@property (nonatomic) BOOL isEnhancedSiriRequest;
@property (nonatomic) BOOL hasIsEnhancedSiriRequest;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCarPlayConnection;
- (void)deleteIsEnhancedSiriEnabled;
- (void)deleteIsEnhancedSiriRequest;

@end
