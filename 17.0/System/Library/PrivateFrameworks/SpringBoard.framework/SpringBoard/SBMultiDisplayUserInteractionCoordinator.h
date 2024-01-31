@class NSMapTable, NSString, NSHashTable, SBWindowScene;
@protocol SBMultiDisplayUserInteractionCoordinatorDelegate;

@interface SBMultiDisplayUserInteractionCoordinator : NSObject <_SBPointerTouchDownEventSnifferDelegate, _SBTouchInteractionEventSnifferDelegate, _SBPointerInteractionEventSnifferDelegate, SBActiveWindowSceneTracking, SBWindowSceneAttachmentObserving> {
    SBWindowScene *_activeDisplayWindowScene;
    SBWindowScene *_activePointerWindowScene;
}

@property (retain, nonatomic) NSMapTable *sceneToEventSniffers;
@property (retain, nonatomic) NSHashTable *activeWindowSceneObservers;
@property (retain, nonatomic) NSHashTable *pointerInteractionObservers;
@property (readonly, weak, nonatomic) SBWindowScene *activePointerWindowScene;
@property (weak, nonatomic) id<SBMultiDisplayUserInteractionCoordinatorDelegate> delegate;
@property (readonly, weak, nonatomic) SBWindowScene *activeTouchDownOriginatedWindowScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) SBWindowScene *activeWindowScene;

- (id)init;
- (void)windowSceneDidDisconnect:(id)a0;
- (void).cxx_destruct;
- (void)windowSceneDidConnect:(id)a0;
- (void)_handleActiveDisplayQualifyingEventInWindowScene:(id)a0 source:(id)a1;
- (id)_windowSceneForEvent:(id)a0;
- (void)addActiveDisplayWindowSceneObserver:(id)a0;
- (void)addPointerInteractionObserver:(id)a0;
- (void)eventSnifferHandledPointerInteractionQualifyingEvent:(id)a0;
- (void)eventSnifferHandledPointerTouchDown:(id)a0;
- (void)eventSnifferHandledPointerTouchUp:(id)a0;
- (void)eventSnifferHandledTouchInteractionQualifyingEvent:(id)a0;
- (void)handleSendEvent:(id)a0;
- (void)removeActiveDisplayWindowSceneObserver:(id)a0;
- (void)removePointerInteractionObserver:(id)a0;

@end
