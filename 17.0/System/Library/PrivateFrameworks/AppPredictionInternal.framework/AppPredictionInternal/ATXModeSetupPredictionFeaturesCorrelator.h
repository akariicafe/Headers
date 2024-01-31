@class ATXModeSetupPredictionFeatures;

@interface ATXModeSetupPredictionFeaturesCorrelator : NSObject {
    unsigned long long _mode;
    ATXModeSetupPredictionFeatures *_modeSetupPredictionFeatures;
}

- (void).cxx_destruct;
- (id)initWithMode:(unsigned long long)a0 features:(id)a1;
- (id)featureVector;
- (unsigned long long)globalPosterConfigurationsCount;
- (void)createFeatureVectorWithModeSetupPredictionFeatures;
- (BOOL)isDigestCurrentlyEnabled;

@end
