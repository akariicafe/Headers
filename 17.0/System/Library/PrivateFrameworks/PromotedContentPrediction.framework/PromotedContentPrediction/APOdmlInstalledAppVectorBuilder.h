@class NSMutableDictionary;

@interface APOdmlInstalledAppVectorBuilder : APOdmlVectorBuilder

@property (retain) NSMutableDictionary *bundleIDtoAppInfo;

- (id)eventName;
- (void).cxx_destruct;
- (id)_installedStoreAppEnumerator;
- (void)buildBundleIDtoAdamIDCache:(id)a0;
- (id)eventsBetween:(id)a0 and:(id)a1 withLimit:(unsigned long long)a2;
- (id)initWithVersion:(id)a0 lookbackPeriod:(id)a1 maxQueryElements:(id)a2 task:(id)a3 exponentialDecayConstant:(id)a4 weightByDuration:(id)a5 isCounterfactual:(BOOL)a6;
- (id)retrieveFilteredEvents:(id)a0;
- (double)weightForEvents:(id)a0;

@end
