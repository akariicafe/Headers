@class CAMCaptureGraphConfiguration, NSString, CAMInternalStorage, CAMExternalStorage;
@protocol CAMPurgeableStorageContainer, CAMPurgeableStorageContainerDelegate, CAMStorageContainer;

@interface CAMStorageController : NSObject <CAMStorageContainer>

@property (readonly, nonatomic) CAMInternalStorage *_internalStorage;
@property (readonly, nonatomic) BOOL _isUsingInternalStorage;
@property (readonly, nonatomic) BOOL _isUsingExternalStorage;
@property (retain, nonatomic, setter=_setCurrentStorage:) id<CAMStorageContainer> _currentStorage;
@property (weak, nonatomic) id<CAMPurgeableStorageContainerDelegate> delegate;
@property (readonly, weak, nonatomic) id<CAMPurgeableStorageContainer> purgeableStorageContainer;
@property (retain, nonatomic) CAMExternalStorage *externalStorage;
@property (readonly, nonatomic) long long totalFreeBytes;
@property (retain, nonatomic) CAMCaptureGraphConfiguration *graphConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)minimumDiskUsageThresholdInBytesForGraphConfiguration:(id)a0;
- (BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)a0 allowPurging:(BOOL)a1 verbose:(BOOL)a2;
- (void)_updateGraphConfigurationOnCurrentStorage;
- (double)availableRecordingTimeInSecondsForGraphConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_updateStorageDelegates;
- (BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)a0 allowPurging:(BOOL)a1;

@end
