@interface HDCloudSyncAvailability : NSObject

@property (readonly, nonatomic) BOOL shouldPull;
@property (readonly, nonatomic) BOOL shouldPush;
@property (readonly, nonatomic) BOOL shouldSyncMedicalID;
@property (readonly, nonatomic) BOOL shouldSyncSummarySharing;
@property (readonly, nonatomic) BOOL shouldSyncAttachments;
@property (readonly, nonatomic) BOOL shouldSyncDeviceContext;
@property (readonly, nonatomic) BOOL shouldSyncStateEntities;

- (id)initWithProfile:(id)a0;
- (void)_setShouldPullWithProfile:(id)a0;
- (void)_setShouldPushWithProfile:(id)a0;
- (void)_setShouldSyncAttachmentsWithProfile:(id)a0;
- (void)_setShouldSyncDeviceContextWithProfile:(id)a0;
- (void)_setShouldSyncMedicalIDWithProfile:(id)a0;
- (void)_setShouldSyncStateEntitiesWithProfile:(id)a0;
- (void)_setShouldSyncSummarySharingWithProfile:(id)a0;

@end
