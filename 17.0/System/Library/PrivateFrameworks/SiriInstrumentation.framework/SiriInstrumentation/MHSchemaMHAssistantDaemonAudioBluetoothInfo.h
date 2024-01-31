@class NSData;

@interface MHSchemaMHAssistantDaemonAudioBluetoothInfo : SISchemaInstrumentationMessage {
    struct { unsigned char state : 1; unsigned char bluetoothAudioDeviceCategory : 1; } _has;
}

@property (nonatomic) int state;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int bluetoothAudioDeviceCategory;
@property (nonatomic) BOOL hasBluetoothAudioDeviceCategory;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBluetoothAudioDeviceCategory;
- (void)deleteState;

@end
