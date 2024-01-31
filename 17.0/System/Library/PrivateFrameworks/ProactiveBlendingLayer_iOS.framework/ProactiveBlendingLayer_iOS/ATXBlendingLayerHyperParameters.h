@class NSString, NSDictionary;

@interface ATXBlendingLayerHyperParameters : NSObject <ATXUniversalBlendingLayerHyperParametersProtocol> {
    NSDictionary *_parameters;
    NSDictionary *_clientModelsToConsiderForConsumerSubType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)abHelperWithMobileAssets;
+ (id)abHelperWithTrialAssets;

- (id)abGroup;
- (id)init;
- (id)initForTestingWithTrialAssetsOnly;
- (double)maxAgeOfStackSuggestionToConsiderStaleInSeconds;
- (long long)minConfidenceCategoryToConsider;
- (BOOL)uiConfidenceLevelMetBySuggestion:(id)a0;
- (BOOL)isSuggestionEligibleForAppPredictionPanel:(id)a0;
- (BOOL)uiSupportsExecutableTypeForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsLayoutType:(long long)a0 consumerSubType:(unsigned char)a1;
- (BOOL)uiSupportsSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)executableTypesToConsiderForConsumerSubType:(unsigned char)a0;
- (id)clientModelPriorityOrder;
- (id)clientModelsToConsiderForConsumerSubType:(unsigned char)a0;
- (id)initForTestingWithMobileAssetAssetsOnly;
- (void).cxx_destruct;
- (unsigned long long)lohStacksToConsiderAboveAndBelowForDeduplication;
- (id)layoutsToConsiderForConsumerSubType:(unsigned char)a0;
- (BOOL)isSuggestionEligibleForSuggestionsWidget:(id)a0;
- (double)sessionLogSamplingRate;
- (id)consumerSubTypesToConsiderForClientModelIds:(id)a0;
- (BOOL)uiIsEnabledForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;
- (id)clientModelsToConsiderForConsumerSubType;
- (BOOL)uiSupportsClientModelIdForSuggestion:(id)a0 consumerSubType:(unsigned char)a1;

@end
