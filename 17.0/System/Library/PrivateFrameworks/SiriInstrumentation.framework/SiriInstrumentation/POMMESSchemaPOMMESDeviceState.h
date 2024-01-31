@class NSString, NSData;

@interface POMMESSchemaPOMMESDeviceState : SISchemaInstrumentationMessage {
    struct { unsigned char isCarDoNotDisturbModeEnabled : 1; unsigned char isCarPlayEnabled : 1; unsigned char isEyesFreeEnabled : 1; unsigned char isLockedWithPasscode : 1; unsigned char isMultiUserDevice : 1; unsigned char isTextToSpeechEnabled : 1; unsigned char isVoiceTriggerEnabled : 1; } _has;
}

@property (copy, nonatomic) NSString *companionName;
@property (nonatomic) BOOL hasCompanionName;
@property (nonatomic) BOOL isCarDoNotDisturbModeEnabled;
@property (nonatomic) BOOL hasIsCarDoNotDisturbModeEnabled;
@property (nonatomic) BOOL isCarPlayEnabled;
@property (nonatomic) BOOL hasIsCarPlayEnabled;
@property (nonatomic) BOOL isEyesFreeEnabled;
@property (nonatomic) BOOL hasIsEyesFreeEnabled;
@property (nonatomic) BOOL isLockedWithPasscode;
@property (nonatomic) BOOL hasIsLockedWithPasscode;
@property (nonatomic) BOOL isMultiUserDevice;
@property (nonatomic) BOOL hasIsMultiUserDevice;
@property (nonatomic) BOOL isTextToSpeechEnabled;
@property (nonatomic) BOOL hasIsTextToSpeechEnabled;
@property (nonatomic) BOOL isVoiceTriggerEnabled;
@property (nonatomic) BOOL hasIsVoiceTriggerEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCompanionName;
- (void)deleteIsCarDoNotDisturbModeEnabled;
- (void)deleteIsCarPlayEnabled;
- (void)deleteIsEyesFreeEnabled;
- (void)deleteIsLockedWithPasscode;
- (void)deleteIsMultiUserDevice;
- (void)deleteIsTextToSpeechEnabled;
- (void)deleteIsVoiceTriggerEnabled;

@end
