@interface RTAccountManagerNotificationCloudSyncAuthorizationStateChanged : RTNotification

@property (readonly, nonatomic) long long cloudSyncAuthorizationState;

- (id)initWithCloudSyncAuthorizationState:(long long)a0;

@end
