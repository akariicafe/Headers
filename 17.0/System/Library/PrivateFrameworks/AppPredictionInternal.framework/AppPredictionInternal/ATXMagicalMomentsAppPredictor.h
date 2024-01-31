@class ATXCoreDuetContextHelper, ATXTimeBucketedRateLimiter;

@interface ATXMagicalMomentsAppPredictor : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXTimeBucketedRateLimiter *_rateLimiter;
}

+ (id)sharedInstance;

- (id)init;
- (void)trainWithXPCActivity:(id)a0;
- (id)addNowPlayingEventsToAppLaunches:(id)a0;
- (id)generateAppLaunchCountedSetFromAppLaunches:(id)a0;
- (id)fetchAppLaunchEventsForTraining;
- (void).cxx_destruct;

@end
