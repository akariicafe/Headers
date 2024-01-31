@class NSString, DDSTrialAsset;
@protocol DDSTrialProvider;

@interface TITrialManager : NSObject <DDSAssetCenterDelegate, TITrialManager>

@property (readonly) id<DDSTrialProvider> ddsTrialProvider;
@property (copy) DDSTrialAsset *trialAsset;
@property BOOL didStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) id /* block */ updateCallback;

+ (id)sharedInstance;

- (void)dealloc;
- (void)start;
- (void)didUpdateAssetsWithType:(id)a0;
- (void)trialDidStopForQuery:(id)a0;
- (void).cxx_destruct;
- (void)trialDidReceiveAsset:(id)a0 forQuery:(id)a1;
- (id)encodedCATrialParametersForLocale:(id)a0;
- (id)encodedLMTrialParametersForLocale:(id)a0;
- (id)favoniusLanguagePowerOverrideForLocale:(id)a0;
- (id)featuresInTrialForLocale:(id)a0;
- (void)handleReceivedTrialAsset:(id)a0;
- (id)initWithDDSTrialProvider:(id)a0;
- (id)inlineCompletionOperatingPointOverrideForLocale:(id)a0;
- (id)inputTranscoderAssetsDirectoryURLForLocale:(id)a0;
- (id)isNegativeLearningEnabledForLocale:(id)a0;
- (id)urlForContentItemType:(id)a0 asset:(id)a1 locale:(id)a2;

@end
