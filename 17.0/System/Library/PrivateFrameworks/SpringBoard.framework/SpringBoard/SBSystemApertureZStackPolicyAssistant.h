@class NSString, SBDeviceApplicationSceneHandle, NSSet, SBHomeGrabberView;
@protocol SBSystemApertureZStackPolicyAssistantDelegate;

@interface SBSystemApertureZStackPolicyAssistant : NSObject <SBDeviceApplicationSceneHandleObserver, SBHomeGrabberViewObserver> {
    BOOL _suppressSystemApertureForSystemChromeSuppression;
    id<SBSystemApertureZStackPolicyAssistantDelegate> _delegate;
    SBDeviceApplicationSceneHandle *_foregroundExclusiveSceneHandle;
    SBHomeGrabberView *_foregroundExclusiveHomeGrabberView;
    NSSet *_associatedBundleIdentifiersToSuppressInSystemAperture;
    NSSet *_associatedSceneIdentifiersToSuppressInSystemAperture;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneHandle:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 transitionContext:(id)a2;
- (void)homeGrabberViewDidUpdateHidden:(id)a0;
- (void).cxx_destruct;

@end
