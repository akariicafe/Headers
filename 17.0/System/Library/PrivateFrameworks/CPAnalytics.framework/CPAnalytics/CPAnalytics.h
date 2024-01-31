@class CPAnalyticsSystemProperties, PHPhotoLibrary, CPAnalyticsDestinationsRegistry, NSObject;
@protocol OS_dispatch_queue;

@interface CPAnalytics : NSObject {
    long long _signpostUniqueValue;
}

@property (class, readonly, nonatomic) BOOL isAllowed;

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) CPAnalyticsDestinationsRegistry *registry;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventsQueue;
@property (readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties;

+ (id)sharedInstance;
+ (void)setupSystemPropertyProvidersForLibrary:(id)a0;
+ (id)bucketNameForInteger:(long long)a0 bucketLimits:(long long)a1;
+ (void)startAppTracking;
+ (void)sendEvent:(id)a0 withPayload:(id)a1;
+ (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)activateEventQueue;
+ (void)releasePhotoLibrary;
+ (id)systemPropertyForKey:(id)a0;
+ (id)bucketNameForDouble:(double)a0 bucketLimits:(id)a1 numberFormatter:(id)a2;
+ (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)addDestination:(id)a0;
+ (void)startViewTracking;
+ (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
+ (long long)startSignpost;
+ (id)creationDateForSignpost:(long long)a0;
+ (void)setupWithConfigurationAtURL:(id)a0;
+ (void)removeDestination:(id)a0;

- (id)init;
- (void)setupSystemPropertyProvidersForLibrary:(id)a0;
- (void)sendEvent:(id)a0 withPayload:(id)a1;
- (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)activateEventQueue;
- (long long)generateNextSignpostID;
- (void)releasePhotoLibrary;
- (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)addDestination:(id)a0;
- (void)_setupSystemPropertyProviders;
- (void).cxx_destruct;
- (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
- (long long)startSignpost;
- (void)setupWithConfigurationAtURL:(id)a0;
- (void)removeDestination:(id)a0;

@end
