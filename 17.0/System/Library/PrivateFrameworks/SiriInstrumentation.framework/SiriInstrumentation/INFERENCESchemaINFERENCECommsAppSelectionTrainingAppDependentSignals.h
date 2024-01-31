@class INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals, INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals, INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals, NSData;

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isResolvedApp : 1; unsigned char isResolvedContactInApp : 1; unsigned char appTimeSpentAffinityScore : 1; unsigned char isForegroundApp : 1; unsigned char timeSinceAppLastLaunchedInSec : 1; unsigned char isFirstPartyApp : 1; } _has;
}

@property (nonatomic) BOOL isResolvedApp;
@property (nonatomic) BOOL hasIsResolvedApp;
@property (nonatomic) BOOL isResolvedContactInApp;
@property (nonatomic) BOOL hasIsResolvedContactInApp;
@property (nonatomic) float appTimeSpentAffinityScore;
@property (nonatomic) BOOL hasAppTimeSpentAffinityScore;
@property (nonatomic) BOOL isForegroundApp;
@property (nonatomic) BOOL hasIsForegroundApp;
@property (nonatomic) int timeSinceAppLastLaunchedInSec;
@property (nonatomic) BOOL hasTimeSinceAppLastLaunchedInSec;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentMessageSignals *messageSignals;
@property (nonatomic) BOOL hasMessageSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingAppDependentPhoneCallSignals *phoneCallSignals;
@property (nonatomic) BOOL hasPhoneCallSignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommsAppSelectionTrainingContactDependentSignals *contactDependentSignals;
@property (nonatomic) BOOL hasContactDependentSignals;
@property (nonatomic) BOOL isFirstPartyApp;
@property (nonatomic) BOOL hasIsFirstPartyApp;
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
- (void)deleteAppTimeSpentAffinityScore;
- (void)deleteContactDependentSignals;
- (void)deleteIsFirstPartyApp;
- (void)deleteIsForegroundApp;
- (void)deleteIsResolvedApp;
- (void)deleteIsResolvedContactInApp;
- (void)deleteMessageSignals;
- (void)deletePhoneCallSignals;
- (void)deleteTimeSinceAppLastLaunchedInSec;

@end
