@class NSString, UIScreenEdgePanGestureRecognizer, NSHashTable, NSObject, UITapGestureRecognizer;
@protocol OS_dispatch_queue;

@interface SBHomeGrabberRevealGesturesManager : NSObject <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer *_bounceTapRecognizer;
    UITapGestureRecognizer *_revealTapRecognizer;
    UITapGestureRecognizer *_revealDoubleTapRecognizer;
    UIScreenEdgePanGestureRecognizer *_revealEdgePanRecognizer;
    NSObject<OS_dispatch_queue> *_registrationQueue;
    NSHashTable *_registeredGrabbers;
    BOOL _gestureEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void)_edgePanChanged:(id)a0;
- (void)unregisterGrabber:(id)a0;
- (BOOL)gestureRecognizerContainsPointerEvent:(id)a0;
- (void)registerGrabber:(id)a0;
- (void).cxx_destruct;
- (void)_tapRecognized:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;

@end
