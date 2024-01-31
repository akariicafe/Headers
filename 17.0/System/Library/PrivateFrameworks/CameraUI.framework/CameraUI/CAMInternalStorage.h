@class CAMCaptureGraphConfiguration, NSString, NSURL, NSByteCountFormatter, NSObject, NSDate;
@protocol OS_dispatch_queue, CAMPurgeableStorageContainerDelegate;

@interface CAMInternalStorage : NSObject <CAMPurgeableStorageContainer>

@property (nonatomic) long long _cachedLowDiskThreshold;
@property (retain, nonatomic) NSDate *_lastPurgeRequestUpdateTime;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_cacheDeleteQueryQueue;
@property (nonatomic) struct CacheDeleteToken { } *_queryQueue_currentToken;
@property (nonatomic, setter=_setPurging:) BOOL _purging;
@property (nonatomic, setter=_setShouldCancelNextPurge:) BOOL _shouldCancelNextPurge;
@property (nonatomic, setter=_setCachedEstimatedSpace:) struct { long long freeBytes; long long fastPurgeableBytes; long long slowPurgeableBytes; } _cachedEstimatedSpace;
@property (readonly, nonatomic) NSByteCountFormatter *_byteFormatter;
@property (nonatomic, setter=_setProResMinimumDiskUsageThreshold:) long long _proResMinimumDiskUsageThreshold;
@property (nonatomic, setter=_setFastPurgeThreshold:) long long _fastPurgeThreshold;
@property (retain, nonatomic) NSURL *_storageMountPoint;
@property (readonly, nonatomic) long long _totalBytes;
@property (readonly, nonatomic, getter=isPurging) BOOL purging;
@property (readonly, nonatomic, getter=isCancelingPurge) BOOL cancelingPurge;
@property (readonly, nonatomic, getter=hasPurgeableResources) BOOL hasPurgeableResources;
@property (weak, nonatomic) id<CAMPurgeableStorageContainerDelegate> delegate;
@property (readonly, nonatomic) long long totalFreeBytes;
@property (retain, nonatomic) CAMCaptureGraphConfiguration *graphConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)minimumDiskUsageThresholdInBytesForGraphConfiguration:(id)a0;
- (BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)a0 allowPurging:(BOOL)a1 verbose:(BOOL)a2;
- (double)availableRecordingTimeInSecondsForGraphConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)a0 allowPurging:(BOOL)a1;
- (long long)_absoluteMinimumBytesForMode:(long long)a0;
- (double)_availableRecordingTimeInMinutesForFreeBytes:(long long)a0 minimumDiskUsageThreshold:(long long)a1 bytesPerMinute:(long long)a2;
- (id)_cacheDeleteVolume;
- (void)_copyAndApplyByteStringFormattingFromDictionary:(id)a0 toDictionary:(id)a1 keys:(id)a2;
- (void)_copyFromDictionary:(id)a0 toDictionary:(id)a1 keys:(id)a2;
- (long long)_fastPurgeThresholdForRequestType:(long long)a0;
- (void)_legacyDiskSpaceDidBecomeLowNotification;
- (void)_loadFreeDiskThresholds;
- (void)_notifyDelegateOfPurgeCompletionAndUpdateContinuousPurgeWithForceStopWithReason:(id)a0 analyticsEvent:(id)a1;
- (long long)_preferredMinimumBytesForConfiguration:(id)a0;
- (void)_purgeFastPurgeableSpaceWithThreshold:(long long)a0 calledFromPurgeCompletion:(BOOL)a1 forceStopReason:(id)a2 analyticsEvent:(id)a3;
- (void)_queryQueue_aggregateLowDiskEventWithIdentifier:(id)a0;
- (void)_queryQueue_cancelCurrentPurge;
- (void)_queryQueue_purgeFastPurgeableResourcesWithThreshold:(long long)a0 analyticsEvent:(id)a1;
- (struct { long long x0; long long x1; long long x2; })_queryQueue_queryAvailableSpaceAndUpdateCachedEstimatesForBytesPerMinute:(long long)a0 minimumDiskUsageThreshold:(long long)a1;
- (void)_queryQueue_updatePurgeRequestStateForTotalFreeBytes:(long long)a0 preferredFreeBytes:(long long)a1;
- (long long)_requestTypeFromNonZeroFastPurgeThreshold:(long long)a0;
- (void)_statMountPoint:(struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0;
- (id)_stringFromAvailableSpace:(struct { long long x0; long long x1; long long x2; })a0;
- (id)_stringFromByteCount:(long long)a0;
- (void)_updateAvailablePurgeableSpaceAsync;
- (void)_updatePurgeRequestStateForConfiguration:(id)a0 totalFreeBytes:(long long)a1;
- (void)cancelPurge;
- (void)purgeFastPurgeableSpaceWithRequestType:(long long)a0;
- (void)reportLowDiskEventWithIdentifier:(id)a0;

@end
