@class NSData;

@interface CDASchemaCDAElectionAdvertisingStartStarted : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char advertisementInterval : 1; unsigned char advertisementDelay : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) float advertisementInterval;
@property (nonatomic) BOOL hasAdvertisementInterval;
@property (nonatomic) float advertisementDelay;
@property (nonatomic) BOOL hasAdvertisementDelay;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAdvertisementDelay;
- (void)deleteAdvertisementInterval;
- (void)deleteState;

@end
