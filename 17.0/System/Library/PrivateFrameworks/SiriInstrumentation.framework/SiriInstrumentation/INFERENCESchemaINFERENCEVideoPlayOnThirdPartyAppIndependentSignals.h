@class NSData;

@interface INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppIndependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isDeviceLockStatus : 1; unsigned char deviceMotionState : 1; unsigned char intentType : 1; unsigned char nowPlayingState : 1; unsigned char deviceClass : 1; unsigned char clientHourOfDay : 1; unsigned char clientLocale : 1; unsigned char clientLanguage : 1; unsigned char clientRegion : 1; unsigned char bucketedDeviceMotionState : 1; } _has;
}

@property (nonatomic) BOOL isDeviceLockStatus;
@property (nonatomic) BOOL hasIsDeviceLockStatus;
@property (nonatomic) int deviceMotionState;
@property (nonatomic) BOOL hasDeviceMotionState;
@property (nonatomic) int intentType;
@property (nonatomic) BOOL hasIntentType;
@property (nonatomic) int nowPlayingState;
@property (nonatomic) BOOL hasNowPlayingState;
@property (nonatomic) int deviceClass;
@property (nonatomic) BOOL hasDeviceClass;
@property (nonatomic) int clientHourOfDay;
@property (nonatomic) BOOL hasClientHourOfDay;
@property (nonatomic) long long clientLocale;
@property (nonatomic) BOOL hasClientLocale;
@property (nonatomic) long long clientLanguage;
@property (nonatomic) BOOL hasClientLanguage;
@property (nonatomic) long long clientRegion;
@property (nonatomic) BOOL hasClientRegion;
@property (nonatomic) int bucketedDeviceMotionState;
@property (nonatomic) BOOL hasBucketedDeviceMotionState;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteBucketedDeviceMotionState;
- (void)deleteClientHourOfDay;
- (void)deleteClientLanguage;
- (void)deleteClientLocale;
- (void)deleteClientRegion;
- (void)deleteDeviceClass;
- (void)deleteDeviceMotionState;
- (void)deleteIntentType;
- (void)deleteIsDeviceLockStatus;
- (void)deleteNowPlayingState;

@end
