@class _PASLock;

@interface ATXModeEntityTrialClientWrapper : ATXTrialClientWrapper {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)initWithClientIdentifier:(int)a0;
- (void).cxx_destruct;
- (id)modeAffinityAppCategoryScores;
- (id)modeAffinityModelsConstants;
- (id)notificationModeEntityModelWeights;
- (void)updateFactors;
- (id)widgetModeEntityModelWeights;

@end
