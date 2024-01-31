@class NSString, TRIRolloutIdentifiers, TRIExperimentIdentifiers;

@interface PREResponseSuggestionsExpConfig : NSObject <PREResponsesTrialProtocol> {
    NSString *_namespaceName;
}

@property (readonly, nonatomic) NSString *treatmentName;
@property (readonly, nonatomic) NSString *inferenceModelDescription;
@property (readonly, nonatomic) NSString *inferenceModelFilePath;
@property (readonly, nonatomic) NSString *inferenceModelConfigPath;
@property (readonly, nonatomic) NSString *espressoBinFilePath;
@property (readonly, nonatomic) NSString *vocabFilePath;
@property (readonly, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (readonly, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers;
@property (readonly, nonatomic) BOOL isMLModelEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqualToConfig:(id)a0;
- (void).cxx_destruct;
- (void)_setDefaultValuesForFactors;
- (BOOL)isEqual:(id)a0;
- (id)initWithNamespaceName:(id)a0 withTrialClient:(id)a1 shouldDownloadAssets:(BOOL)a2;
- (void)_fillDefaultValueForFactors;

@end
