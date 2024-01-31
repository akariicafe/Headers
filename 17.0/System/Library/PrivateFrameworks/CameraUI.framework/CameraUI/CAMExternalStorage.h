@class AVExternalStorageDevice, NSUUID, NSString, NSURL, CAMCaptureGraphConfiguration;
@protocol CAMPurgeableStorageContainerDelegate;

@interface CAMExternalStorage : NSObject <CAMStorageContainer>

@property (readonly, nonatomic) AVExternalStorageDevice *_underlyingStorageDevice;
@property (readonly, nonatomic) NSURL *_baseURL;
@property (readonly, nonatomic) BOOL connected;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL notRecommendedForCaptureUse;
@property (readonly, nonatomic) long long totalFreeBytes;
@property (retain, nonatomic) CAMCaptureGraphConfiguration *graphConfiguration;
@property (weak, nonatomic) id<CAMPurgeableStorageContainerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)minimumDiskUsageThresholdInBytesForGraphConfiguration:(id)a0;
- (BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)a0 allowPurging:(BOOL)a1 verbose:(BOOL)a2;
- (double)availableRecordingTimeInSecondsForGraphConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasDiskSpaceToAllowCaptureWithConfiguration:(id)a0 allowPurging:(BOOL)a1;
- (id)generateDestinationURLForMode:(long long)a0;
- (id)initWithNoDevice;
- (id)initWithStorageDevice:(id)a0;

@end
