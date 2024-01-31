@class NSData;

@interface SetupSchemaProvisionalSiriSetupEnded : SISchemaInstrumentationMessage {
    struct { unsigned char siriEnabled : 1; unsigned char dismissed : 1; } _has;
}

@property (nonatomic) BOOL siriEnabled;
@property (nonatomic) BOOL hasSiriEnabled;
@property (nonatomic) BOOL dismissed;
@property (nonatomic) BOOL hasDismissed;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteDismissed;
- (void)deleteSiriEnabled;

@end
