@class NSTimeZone, NSString, _ATXInternalUninstallNotification, NSDate, _PASLock;

@interface _ATXAppLaunchHistogram : NSObject <ATXBundleIdRemovableProtocol, ATXActionKeyRemovableProtocol, NSSecureCoding, _ATXAppLaunchHistogramProtocol, ATXCategoricalHistogramProtocol> {
    long long _secondsPerLocaltimeInterval;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    int _timeBase;
    _PASLock *_lock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _prevLocaltimeLock;
    NSDate *_prevDate;
    NSTimeZone *_prevTimeZone;
    unsigned short _prevLocaltime;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)totalTimeOfDayLaunchesForElapsedTime:(double)a0;
- (void)removeBundleIds:(id)a0;
- (void)dealloc;
- (double)totalTimeOfDayLaunchesForDate:(id)a0;
- (void)removeActionKeys:(id)a0;
- (void)_addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 arbitraryWeight:(float)a3;
- (void)resetHistogram:(id)a0;
- (double)relativeLaunchPopularityWithBundleId:(id)a0 date:(id)a1 distanceScale:(float)a2;
- (void)addLaunchWithBundleId:(id)a0 elapsedTime:(double)a1;
- (double)relativeLaunchPopularityWithBundleId:(id)a0 date:(id)a1;
- (double)averageLaunchesPerBundleId:(id)a0;
- (void)decayWithHalfLifeInDays:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (double)entropy;
- (void)verifyDataIntegrity;
- (void)resetData;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2;
- (double)entropyForBundleId:(id)a0;
- (double)totalLaunches;
- (unsigned short)_localTimeWithDate:(id)a0 timeZone:(id)a1;
- (double)launchPopularityWithBundleId:(id)a0 date:(id)a1;
- (void)addLaunchWithBundleId:(id)a0 elapsedTime:(double)a1 weight:(float)a2;
- (BOOL)bundleHasBeenLaunched:(id)a0;
- (void)addLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 weight:(float)a3;
- (int)removeHistoryForBundleIds:(id)a0;
- (BOOL)removeHistoryForBundleId:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (double)totalLaunchesForBundleIds:(id)a0;
- (id)initWithHistogram:(id)a0 bucketCount:(unsigned short)a1 filter:(BOOL)a2 timeBase:(int)a3;
- (void)removeIdentifiers:(id)a0;
- (double)totalTimeOfDayLaunchesForDate:(id)a0 distanceScale:(float)a1;
- (double)overallLaunchPopularityForBundleId:(id)a0;
- (double)relativeLaunchPopularityWithBundleId:(id)a0 elapsedTime:(double)a1 distanceScale:(float)a2;
- (double)entropyForDate:(id)a0;
- (double)unsmoothedLaunchesForBundleIds:(id)a0 forLocalTime:(unsigned short)a1;
- (void)decayByFactor:(double)a0;
- (double)totalLaunchesForBundleIds:(id)a0 forDate:(id)a1 distanceScale:(float)a2;
- (double)ratio:(double)a0 over:(double)a1;
- (unsigned short)_eventIdforBundleId:(id)a0;
- (unsigned short)bucketCount;
- (double)totalTimeOfDayLaunchesForElapsedTime:(double)a0 distanceScale:(float)a1;
- (unsigned short)_localTimeWithDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)removeLaunchWithBundleId:(id)a0 date:(id)a1 timeZone:(id)a2 weight:(float)a3;

@end
