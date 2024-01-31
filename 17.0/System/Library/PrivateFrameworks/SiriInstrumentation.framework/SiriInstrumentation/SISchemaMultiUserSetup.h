@class NSData;

@interface SISchemaMultiUserSetup : SISchemaInstrumentationMessage {
    struct { unsigned char numGuestsAccepted : 1; unsigned char numParticipantsWithTrust : 1; unsigned char numUsersWhoSyncedRecognizeMyVoice : 1; unsigned char numUsersWithRecognizeMyVoiceEnabled : 1; unsigned char numVoiceProfilesAvailable : 1; unsigned char numUsersWithPersonalRequestsEnabled : 1; unsigned char numUsersWithMatchingSiriLanguage : 1; unsigned char numUsersWithSiriCloudSyncEnabled : 1; unsigned char numUsersWithLocationServicesEnabled : 1; } _has;
}

@property (nonatomic) unsigned int numGuestsAccepted;
@property (nonatomic) BOOL hasNumGuestsAccepted;
@property (nonatomic) unsigned int numParticipantsWithTrust;
@property (nonatomic) BOOL hasNumParticipantsWithTrust;
@property (nonatomic) unsigned int numUsersWhoSyncedRecognizeMyVoice;
@property (nonatomic) BOOL hasNumUsersWhoSyncedRecognizeMyVoice;
@property (nonatomic) unsigned int numUsersWithRecognizeMyVoiceEnabled;
@property (nonatomic) BOOL hasNumUsersWithRecognizeMyVoiceEnabled;
@property (nonatomic) unsigned int numVoiceProfilesAvailable;
@property (nonatomic) BOOL hasNumVoiceProfilesAvailable;
@property (nonatomic) int numUsersWithPersonalRequestsEnabled;
@property (nonatomic) BOOL hasNumUsersWithPersonalRequestsEnabled;
@property (nonatomic) int numUsersWithMatchingSiriLanguage;
@property (nonatomic) BOOL hasNumUsersWithMatchingSiriLanguage;
@property (nonatomic) int numUsersWithSiriCloudSyncEnabled;
@property (nonatomic) BOOL hasNumUsersWithSiriCloudSyncEnabled;
@property (nonatomic) int numUsersWithLocationServicesEnabled;
@property (nonatomic) BOOL hasNumUsersWithLocationServicesEnabled;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteNumVoiceProfilesAvailable;
- (void)deleteNumGuestsAccepted;
- (void)deleteNumParticipantsWithTrust;
- (void)deleteNumUsersWhoSyncedRecognizeMyVoice;
- (void)deleteNumUsersWithLocationServicesEnabled;
- (void)deleteNumUsersWithMatchingSiriLanguage;
- (void)deleteNumUsersWithPersonalRequestsEnabled;
- (void)deleteNumUsersWithRecognizeMyVoiceEnabled;
- (void)deleteNumUsersWithSiriCloudSyncEnabled;

@end
