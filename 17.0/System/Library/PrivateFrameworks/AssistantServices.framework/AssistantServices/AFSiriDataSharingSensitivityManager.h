@class TRIClient;

@interface AFSiriDataSharingSensitivityManager : NSObject {
    TRIClient *_client;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isOptedOutOfMTE;
- (BOOL)_isMTEOptOutEnabled;
- (BOOL)_isOptedOutOfMTE;
- (BOOL)_isOptedOutOfMTEWithOptInStatus:(long long)a0 locale:(id)a1 supportsUOD:(BOOL)a2;
- (BOOL)_isOverrideForMTEOptOutEnabled;
- (BOOL)_isRequestSensitiveForSensitiveDomainPolicy;
- (BOOL)_isRequestSensitiveForSensitiveDomainWithSamplingPolicyForLanguage:(id)a0;
- (BOOL)_isRequestSensitiveForUnknownPolicy;
- (BOOL)_isRequestSensitiveWithPolicy:(long long)a0 optInStatus:(long long)a1 siriLanguageCode:(id)a2;
- (BOOL)_isTrialConfigEnabledWithNamespaceId:(int)a0 factorName:(id)a1;
- (BOOL)_isTrialConfigForLogRedactionForMessagesEnabled;
- (BOOL)_isTrialConfigForMTEOptOutEnabled;
- (void)_registerUpdateHandler;
- (BOOL)isRequestSensitiveWithPolicy:(long long)a0 optInStatus:(long long)a1 siriLanguageCode:(id)a2;

@end
