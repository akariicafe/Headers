@class NSString, TRIRolloutIdentifiers, TRIExperimentIdentifiers;

@interface PSGResponseSuggestionsExpConfigDefaults : NSObject <PSGResponseSuggestionsExpConfigProtocol>

@property (readonly, nonatomic) NSString *treatmentName;
@property (readonly, nonatomic) TRIRolloutIdentifiers *rolloutIdentifiers;
@property (readonly, nonatomic) TRIExperimentIdentifiers *experimentIdentifiers;
@property (readonly, nonatomic) BOOL isMLModelEnabled;
@property (readonly, nonatomic) NSString *inferenceModelFilePath;
@property (readonly, nonatomic) NSString *inferenceModelConfigPath;
@property (readonly, nonatomic) NSString *espressoBinFilePath;
@property (readonly, nonatomic) NSString *vocabFilePath;
@property (readonly, nonatomic) NSString *language;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
