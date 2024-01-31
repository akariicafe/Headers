@class NSString, TRIRolloutIdentifiers, TRIExperimentIdentifiers, TRIClient;

@interface PSGResponseSuggestionsExpConfig : NSObject <PSGResponseSuggestionsExpConfigProtocol> {
    TRIClient *_trialClient;
    NSString *_namespaceName;
}

@property (readonly, nonatomic) NSString *treatmentName;
@property (readonly, nonatomic) NSString *inferenceModelDescription;
@property (readonly, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (readonly, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers;
@property (readonly, nonatomic) BOOL isMLModelEnabled;
@property (readonly, nonatomic) BOOL isMLModelDownloading;
@property (readonly, nonatomic) NSString *inferenceModelFilePath;
@property (readonly, nonatomic) NSString *inferenceModelConfigPath;
@property (readonly, nonatomic) NSString *espressoBinFilePath;
@property (readonly, nonatomic) NSString *vocabFilePath;
@property (readonly, nonatomic) NSString *language;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithNamespaceName:(id)a0 withLanguage:(id)a1 withTrialClient:(id)a2 shouldDownloadAssets:(BOOL)a3;
- (void).cxx_destruct;
- (void)_setDefaultValuesForFactors;
- (void)_fillDefaultValuesForFactors;

@end
