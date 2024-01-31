@class NSString, SBWindowScene, SBDeviceApplicationRemoteTransientOverlayViewProvider;

@interface _SBActiveRemoteTransientOverlayViewProviderAdapter : NSObject <SBDeviceApplicationRemoteTransientOverlayViewProviding>

@property (weak, nonatomic) SBDeviceApplicationRemoteTransientOverlayViewProvider *viewServiceProvider;
@property (weak, nonatomic) SBDeviceApplicationRemoteTransientOverlayViewProvider *sceneBackedProvider;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPresentingOnBehalfOfApplication:(id)a0;
- (void)dismissRemoteTransientOverlayViewController:(id)a0;
- (void)presentRemoteTransientOverlayViewController:(id)a0 presentationRequest:(id)a1;
- (void).cxx_destruct;
- (BOOL)isPresentingTransientOverlay:(id)a0;

@end
