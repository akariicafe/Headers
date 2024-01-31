@interface ATXModeSetupPredictionModel : NSObject {
    unsigned long long _mode;
}

- (id)modelName;
- (id)initWithMode:(unsigned long long)a0;
- (double)probabilityScore;
- (id)featuresToModel;
- (id)modeSetupPredictionModel;

@end
