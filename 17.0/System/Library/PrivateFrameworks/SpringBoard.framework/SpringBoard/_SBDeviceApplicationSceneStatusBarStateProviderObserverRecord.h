@protocol SBDeviceApplicationSceneStatusBarStateObserver;

@interface _SBDeviceApplicationSceneStatusBarStateProviderObserverRecord : NSObject

@property (readonly, weak, nonatomic) id<SBDeviceApplicationSceneStatusBarStateObserver> observer;
@property (readonly, nonatomic) struct SBDeviceApplicationSceneStatusBarStateObserverFlags { unsigned char wantsDidChangeStatusBarStyleTo : 1; unsigned char wantsDidChangeStatusBarPartStylesTo : 1; unsigned char wantsDidChangeStatusBarAlphaTo : 1; unsigned char wantsDidChangeStatusBarHiddenTo_withAnimation : 1; unsigned char wantsDidChangeStatusBarOrientationTo : 1; unsigned char wantsDidInvalidateStatusBarDescriptionForSceneWithIdentifier : 1; unsigned char wantsDidChangeBackgroundActivitiesToSuppressTo : 1; unsigned char wantsDidChangeStatusBarAvoidanceFrameTo : 1; unsigned char wantsDidChangeSceneInterfaceOrientationTo : 1; } flags;

- (id)initWithObserver:(id)a0 andFlags:(struct SBDeviceApplicationSceneStatusBarStateObserverFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; })a1;
- (void).cxx_destruct;

@end
