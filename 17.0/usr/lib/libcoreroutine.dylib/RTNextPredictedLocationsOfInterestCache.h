@class RTDataProtectionManager, NSArray, NSObject, RTStarkManager;
@protocol OS_dispatch_queue, RTNextPredictedLocationsOfInterestCacheDelegate;

@interface RTNextPredictedLocationsOfInterestCache : NSObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSArray *nextPredictedLocationsOfInterest;
@property (retain, nonatomic) RTDataProtectionManager *dataProtectionManager;
@property (retain, nonatomic) RTStarkManager *starkManager;
@property (weak, nonatomic) id<RTNextPredictedLocationsOfInterestCacheDelegate> delegate;

+ (id)cachePath;

- (void)clear;
- (id)init;
- (void)dealloc;
- (void)onDataProtectionNotification:(id)a0;
- (void)purgeWithReferenceDate:(id)a0;
- (void).cxx_destruct;
- (void)cacheNextPredictedLocationsOfInterest:(id)a0;
- (id)getCachedNextPredictedLocationsOfInterest;
- (void)handleStarkTrustedConnectionEstablished:(BOOL)a0;
- (void)handleUnlockedSinceBoot:(BOOL)a0;
- (id)initWithQueue:(id)a0 dataProtectionManager:(id)a1 starkManager:(id)a2;
- (void)onStarkNotification:(id)a0;

@end
