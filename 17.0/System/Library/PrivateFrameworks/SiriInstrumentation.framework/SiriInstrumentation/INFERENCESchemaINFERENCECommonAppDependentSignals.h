@class INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals, NSString, INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals, NSData;

@interface INFERENCESchemaINFERENCECommonAppDependentSignals : SISchemaInstrumentationMessage {
    struct { unsigned char isFirstPartyBundle : 1; unsigned char isForegroundApp : 1; unsigned char isResolvedApp : 1; unsigned char appScoreFromModel : 1; unsigned char compoundActiveBundleScore : 1; unsigned char totalTimeSpentByUserInAppPerDay : 1; unsigned char timeSpentByUserInAppToday : 1; unsigned char timeSinceAppLastLaunchedInSec : 1; } _has;
}

@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasAppBundleId;
@property (nonatomic) BOOL isFirstPartyBundle;
@property (nonatomic) BOOL hasIsFirstPartyBundle;
@property (nonatomic) BOOL isForegroundApp;
@property (nonatomic) BOOL hasIsForegroundApp;
@property (nonatomic) BOOL isResolvedApp;
@property (nonatomic) BOOL hasIsResolvedApp;
@property (nonatomic) float appScoreFromModel;
@property (nonatomic) BOOL hasAppScoreFromModel;
@property (nonatomic) double compoundActiveBundleScore;
@property (nonatomic) BOOL hasCompoundActiveBundleScore;
@property (nonatomic) unsigned int totalTimeSpentByUserInAppPerDay;
@property (nonatomic) BOOL hasTotalTimeSpentByUserInAppPerDay;
@property (nonatomic) unsigned int timeSpentByUserInAppToday;
@property (nonatomic) BOOL hasTimeSpentByUserInAppToday;
@property (nonatomic) int timeSinceAppLastLaunchedInSec;
@property (nonatomic) BOOL hasTimeSinceAppLastLaunchedInSec;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentFrequencyAndRecencySignals *appDependentFrequencyAndRecencySignals;
@property (nonatomic) BOOL hasAppDependentFrequencyAndRecencySignals;
@property (retain, nonatomic) INFERENCESchemaINFERENCECommonAppDependentEntityFrequencyAndRecencySignals *appDependentEntityFrequencyAndRecencySignals;
@property (nonatomic) BOOL hasAppDependentEntityFrequencyAndRecencySignals;
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
- (void)deleteCompoundActiveBundleScore;
- (void)deleteTimeSpentByUserInAppToday;
- (void)deleteAppBundleId;
- (void)deleteAppDependentEntityFrequencyAndRecencySignals;
- (void)deleteAppDependentFrequencyAndRecencySignals;
- (void)deleteAppScoreFromModel;
- (void)deleteIsFirstPartyBundle;
- (void)deleteIsForegroundApp;
- (void)deleteIsResolvedApp;
- (void)deleteTimeSinceAppLastLaunchedInSec;
- (void)deleteTotalTimeSpentByUserInAppPerDay;

@end
