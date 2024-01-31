@protocol HKTinkerSharingSetupDelegate;

@interface HKTinkerSharingGizmoPermissionController : BPSWelcomeOptinViewController {
    long long _layoutStyle;
    id<HKTinkerSharingSetupDelegate> _delegate;
}

- (id)detailString;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)titleString;
- (id)imageResource;
- (id)suggestedButtonTitle;
- (void)optInDidSucceed;
- (id)_localizedFullNameForFirstName:(id)a0 lastName:(id)a1;
- (BOOL)controllerAllowsNavigatingBackFrom;
- (BOOL)controllerAllowsNavigatingBackTo;
- (id)initWithStyle:(long long)a0 delegate:(id)a1;
- (void)optInDidFailWithError:(id)a0;
- (void)sendOptInRequest;
- (id)tapToRadarMetadata;
- (BOOL)wantsLightenBlendedScreen;

@end
