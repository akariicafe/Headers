@class NSSet, NSDictionary, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSSet *_descriptors;
    NSDictionary *_descriptorInstallDates;
    NSUserDefaults *_userDefaults;
    id<ATXCategoricalHistogramProtocol> _spotlightAppLaunchHistogram;
}

@property (class, readonly, nonatomic) NSDictionary *assets;

- (void)dealloc;
- (void)updateDefaultsWithSystemDescriptors:(id)a0 installDatesCache:(id)a1 reason:(id)a2;
- (void)_updateHomeScreenDefaultsOnQueueWithReason:(id)a0 appLaunchCounts:(id)a1;
- (void)updateDefaultsIfNeededWithSystemDescriptors:(id)a0 installDatesCache:(id)a1 reason:(id)a2;
- (id)_retrieveLastUpdateDate;
- (void)updateDefaultsDueToAmbientConfigUpdate;
- (void)_updateAllDefaultsOnQueueWithReason:(id)a0;
- (void)updateDefaultsDueToRelevantHomeScreenConfigUpdate;
- (void)_updateAmbientDefaultsOnQueueWithReason:(id)a0 appLaunchCounts:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)waitForPendingAsynchronousOperations;
- (id)initWithSpotlightAppLaunchHistogram:(id)a0;
- (BOOL)_isDayZeroExperience;

@end
