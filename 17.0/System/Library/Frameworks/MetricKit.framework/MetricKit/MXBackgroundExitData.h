@interface MXBackgroundExitData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long cumulativeBackgroundFetchCompletionTimeoutExitCount;
@property (readonly) unsigned long long cumulativeBackgroundURLSessionCompletionTimeoutExitCount;
@property (readonly) unsigned long long cumulativeNormalAppExitCount;
@property (readonly) unsigned long long cumulativeMemoryResourceLimitExitCount;
@property (readonly) unsigned long long cumulativeCPUResourceLimitExitCount;
@property (readonly) unsigned long long cumulativeMemoryPressureExitCount;
@property (readonly) unsigned long long cumulativeBadAccessExitCount;
@property (readonly) unsigned long long cumulativeAbnormalExitCount;
@property (readonly) unsigned long long cumulativeIllegalInstructionExitCount;
@property (readonly) unsigned long long cumulativeAppWatchdogExitCount;
@property (readonly) unsigned long long cumulativeSuspendedWithLockedFileExitCount;
@property (readonly) unsigned long long cumulativeBackgroundTaskAssertionTimeoutExitCount;

- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (id)initWithNormalAppExitCount:(unsigned long long)a0 memoryResourceLimitExitCount:(unsigned long long)a1 cpuResourceLimitExitCount:(unsigned long long)a2 memoryPressureExitCount:(unsigned long long)a3 badAccessExitCount:(unsigned long long)a4 abnormalExitCount:(unsigned long long)a5 illegalInstructionExitCount:(unsigned long long)a6 appWatchDogExitCount:(unsigned long long)a7 cumulativeSuspendedWithLockedFileExitCount:(unsigned long long)a8 cumulativeBackgroundTaskAssertionTimeoutExitCount:(unsigned long long)a9 cumulativeBackgroundURLSessionCompletionTimeoutExitCount:(unsigned long long)a10 cumulativeBackgroundFetchCompletionTimeoutExitCount:(unsigned long long)a11;
- (id)initWithNormalAppExitCount:(id)a0 memoryResourceLimitExitCount:(id)a1 cpuResourceLimitExitCount:(id)a2 badAccessExitCount:(id)a3 abnormalExitCount:(id)a4 illegalInstructionExitCount:(id)a5 appWatchDogExitCount:(id)a6 cumulativeSuspendedWithLockedFileExitCount:(id)a7 cumulativeBackgroundTaskAssertionTimeoutExitCount:(id)a8;
- (id)initWithNormalAppExitCount:(id)a0 memoryResourceLimitExitCount:(id)a1 cpuResourceLimitExitCount:(id)a2 memoryPressureExitCount:(id)a3 badAccessExitCount:(id)a4 abnormalExitCount:(id)a5 illegalInstructionExitCount:(id)a6 appWatchDogExitCount:(id)a7 cumulativeSuspendedWithLockedFileExitCount:(id)a8 cumulativeBackgroundTaskAssertionTimeoutExitCount:(id)a9;

@end
