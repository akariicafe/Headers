@class NSArray, NSData;

@interface SISchemaActiveStatus : SISchemaInstrumentationMessage {
    struct { unsigned char carPlayActiveWithin24Hours : 1; } _has;
}

@property (copy, nonatomic) NSArray *audioDevicesActiveWithin24Hours;
@property (nonatomic) BOOL carPlayActiveWithin24Hours;
@property (nonatomic) BOOL hasCarPlayActiveWithin24Hours;
@property (copy, nonatomic) NSArray *carBluetoothHeadUnitsActiveWithinLast24Hours;
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
- (void)addAudioDevicesActiveWithin24Hours:(id)a0;
- (void)addCarBluetoothHeadUnitsActiveWithinLast24Hours:(id)a0;
- (id)audioDevicesActiveWithin24HoursAtIndex:(unsigned long long)a0;
- (unsigned long long)audioDevicesActiveWithin24HoursCount;
- (id)carBluetoothHeadUnitsActiveWithinLast24HoursAtIndex:(unsigned long long)a0;
- (unsigned long long)carBluetoothHeadUnitsActiveWithinLast24HoursCount;
- (void)clearAudioDevicesActiveWithin24Hours;
- (void)clearCarBluetoothHeadUnitsActiveWithinLast24Hours;
- (void)deleteAudioDevicesActiveWithin24Hours;
- (void)deleteCarBluetoothHeadUnitsActiveWithinLast24Hours;
- (void)deleteCarPlayActiveWithin24Hours;

@end
