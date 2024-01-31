@interface VideosUI.JSAppleMusicSubscription : VUIJSObject <VideosUI.JSAppleMusicSubscriptionInterface> {
    void /* unknown type, empty encoding */ musicSubscriptionStatusController;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0;
- (void)musicSubscriptionStatusHasChanged;
- (void)refreshAppleMusicSubscriptionStatusWithJsCallback:(id)a0;

@end
