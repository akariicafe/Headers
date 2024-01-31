@class STBackgroundActivitiesStatusDomain, NSMutableDictionary, STBackgroundActivitiesStatusDomainData;

@interface SBBackgroundActivityAssertionShimManager : NSObject {
    STBackgroundActivitiesStatusDomain *_backgroundActivitiesDomain;
    STBackgroundActivitiesStatusDomainData *_processedData;
    NSMutableDictionary *_attributionsToAssertions;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_registerHandlerAndHandleExistingState;
- (void)_updateShimAssertionsForData:(id)a0;

@end
