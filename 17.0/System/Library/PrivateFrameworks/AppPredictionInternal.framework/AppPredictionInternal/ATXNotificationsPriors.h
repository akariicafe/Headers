@class NSDictionary, ATXApp2VecMapping;

@interface ATXNotificationsPriors : NSObject {
    NSDictionary *_parameters;
    double _defaultPrior;
    ATXApp2VecMapping *_appFeatures;
}

+ (id)sharedInstance;

- (id)init;
- (double)getPriorForAppId:(id)a0;
- (id)initWithAssetClass:(Class)a0 andPathToAppFeatures:(id)a1;
- (void).cxx_destruct;
- (double)getAppBiasForBundleId:(id)a0;

@end
