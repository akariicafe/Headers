@class NSString, NSMutableSet, NSMutableDictionary;

@interface SBActivityBannerObserver : NSObject <SBActivityBannerViewControllerDelegate, SBActivityObserver>

@property (retain, nonatomic) NSMutableSet *prominentAlertPresentingActivities;
@property (retain, nonatomic) NSMutableDictionary *itemByActivityIdentifier;
@property (retain, nonatomic) NSMutableDictionary *bannerPresentableByActivityIdentifier;
@property (nonatomic) long long activityEnvironment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)dismissAlert:(id)a0;
- (void)presentAlert:(id)a0;
- (void)activityDidEnd:(id)a0;
- (void)activityProminenceChanged:(BOOL)a0 item:(id)a1;
- (void)_dismissBannerWithActivityIdentifier:(id)a0;
- (void)_handleActivityAlert:(id)a0 present:(BOOL)a1;
- (void)_handleProminentActivityAlert:(id)a0 prominent:(BOOL)a1;
- (void)_postBannerWithActivityIdentifier:(id)a0 payloadIdentifier:(id)a1 prominent:(BOOL)a2 completion:(id /* block */)a3;
- (void)_sendAnalyticsEventWithPayloadBuilder:(id /* block */)a0;
- (void)activityBannerDidDisappear:(id)a0 activityIdentifier:(id)a1;
- (void)activityDidDismiss:(id)a0;
- (void)activityDidStart:(id)a0;
- (void)activityEnvironmentChanged:(long long)a0;
- (BOOL)shouldHandleActivityItem:(id)a0;

@end
