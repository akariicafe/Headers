@class NSCountedSet;
@protocol MSMediaStreamDaemonDelegate;

@interface MSMediaStreamDaemon : MSDaemon {
    NSCountedSet *_retainedObjects;
}

@property (nonatomic) id<MSMediaStreamDaemonDelegate> delegate;

- (void)retryOutstandingActivities;
- (void)abortAllActivityForPersonID:(id)a0;
- (id)init;
- (void)deleteAssetCollections:(id)a0 forPersonID:(id)a1;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)a0;
- (BOOL)isInRetryState;
- (void)start;
- (void)pollForSubscriptionUpdatesForPersonID:(id)a0;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)a0;
- (void)refreshServerSideConfigurationForPersonID:(id)a0;
- (id)nextActivityDate;
- (void)stopAllActivities;
- (void)didUnidle;
- (void)didExceedPublishQuotaForPersonID:(id)a0 retryDate:(id)a1;
- (void)didReceiveNewShareState:(id)a0 oldShareState:(id)a1 forPersonID:(id)a2;
- (void)reenqueueQuarantinedActivitiesWithReason:(id)a0;
- (void)stop;
- (void)showInvitationFailureAlertForPersonID:(id)a0 failures:(id)a1;
- (BOOL)hasOutstandingActivity;
- (BOOL)dequeueAssetCollectionWithGUIDs:(id)a0 personID:(id)a1 outError:(id *)a2;
- (id)_boundDeleterForPersonID:(id)a0;
- (id)_boundServerSideConfigManagerForPersonID:(id)a0;
- (void).cxx_destruct;
- (void)didReceivePushNotificationForPersonID:(id)a0;
- (void)didReceiveAuthenticationFailureForPersonID:(id)a0;
- (BOOL)mayDownloadPersonID:(id)a0;
- (void)didReceiveGlobalResetSyncForPersonID:(id)a0;
- (id)_boundPublisherForPersonID:(id)a0;
- (void)computeHashForAsset:(id)a0 personID:(id)a1;
- (id)subscribedStreamsForPersonID:(id)a0;
- (BOOL)personIDHasOutstandingPublications:(id)a0;
- (void)forgetPersonID:(id)a0;
- (BOOL)enqueueAssetCollection:(id)a0 personID:(id)a1 outError:(id *)a2;
- (void)didIdle;
- (id)serverSideConfigurationForPersonID:(id)a0;
- (id)ownSubscribedStreamForPersonID:(id)a0;
- (void)resetSubscriberSyncForPersonID:(id)a0;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotificationForPersonID:(id)a0;
- (id)_boundSubscriberForPersonID:(id)a0;
- (void)didReceiveServerSideConfigurationVersion:(id)a0 forPersonID:(id)a1;

@end
