@protocol WLKNotificationsImpl, WLKNotificationCenterDelegate;

@interface WLKNotificationCenter : NSObject {
    id<WLKNotificationsImpl> _impl;
}

@property (weak, nonatomic) id<WLKNotificationCenterDelegate> delegate;

+ (id)defaultCenter;

- (id)init;
- (void)setBadgeNumber:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)setBadgeString:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)post:(id)a0 title:(id)a1 body:(id)a2 options:(id)a3;
- (BOOL)isCategoryBadgeSettingEnabledByUser:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isCategoryEnabledByUser:(long long)a0;

@end
