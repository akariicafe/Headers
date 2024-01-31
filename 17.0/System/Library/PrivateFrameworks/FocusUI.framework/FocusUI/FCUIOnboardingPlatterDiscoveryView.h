@class NSString, FCUIOnboardingStackedNotificationView;
@protocol FCUIOnboardingPlatterDiscoveryViewDelegate;

@interface FCUIOnboardingPlatterDiscoveryView : PLPlatterDiscoveryView <FocusUI.QuickStartViewControllerDelegate> {
    FCUIOnboardingStackedNotificationView *_notificationPlatterView1;
    FCUIOnboardingStackedNotificationView *_notificationPlatterView2;
}

@property (weak, nonatomic) id<FCUIOnboardingPlatterDiscoveryViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_bodyStringForDNDModeSemanticType:(long long)a0;
+ (id)onboardingPlatterDiscoveryViewForMode:(id)a0;

- (id /* block */)presentQuickStartForModeIdentifier:(id)a0;
- (id)initWithMode:(id)a0;
- (void)requestDismissal:(id)a0;
- (void)_layoutGraphicView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_configureGraphicViewIfNecessary;

@end
