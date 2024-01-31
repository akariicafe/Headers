@class BLSBacklightSceneVisualState, NSString, BLSAlwaysOnFrameSpecifier, BLSAlwaysOnSession, NSDate, FBSScene;
@protocol BLSBacklightSceneEnvironmentUpdating, BLSBacklightSceneEnvironmentDelegate;

@interface BLSBacklightFBSSceneEnvironment : NSObject <BLSBacklightSceneEnvironment_Private> {
    id<BLSBacklightSceneEnvironmentDelegate> _delegate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, getter=_FBSScene, setter=_setFBSScene:) FBSScene *fbsScene;
@property BOOL optsOutOfProcessAssertions;
@property (readonly) NSDate *presentationDate;
@property (retain) BLSAlwaysOnSession *alwaysOnSession;
@property (getter=isAnimatingVisualState) BOOL animatingVisualState;
@property (retain) id<BLSBacklightSceneEnvironmentUpdating> updater;
@property (retain) id<BLSBacklightSceneEnvironmentDelegate> delegate;
@property (readonly, copy) NSString *identifier;
@property (readonly, getter=isDelegateActive) BOOL delegateActive;
@property (readonly, getter=isDisplayBlanked) BOOL displayBlanked;
@property (readonly) BLSBacklightSceneVisualState *visualState;
@property (readonly) BLSAlwaysOnFrameSpecifier *frameSpecifier;
@property (readonly, getter=isLiveUpdating) BOOL liveUpdating;
@property (readonly, getter=hasUnrestrictedFramerateUpdates) BOOL unrestrictedFramerateUpdates;
@property BOOL supportsAlwaysOn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)createEnvironmentForFBSScene:(id)a0;

@end
