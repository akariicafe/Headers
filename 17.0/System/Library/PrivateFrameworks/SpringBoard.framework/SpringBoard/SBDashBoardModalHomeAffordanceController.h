@class SBFZStackParticipant, NSString, UIScreenEdgePanGestureRecognizer, SBFZStackResolver;

@interface SBDashBoardModalHomeAffordanceController : NSObject <CSModalHomeAffordanceControlling> {
    SBFZStackResolver *_zStackResolver;
    SBFZStackParticipant *_zStackParticipant;
}

@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *homeGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)ownsHomeGesture;
- (id)init;
- (void).cxx_destruct;
- (BOOL)registerHomeGestureParticipant:(id)a0;
- (void)unregisterHomeGestureParticipant;
- (void)_addGrabberView:(id)a0 clientBridge:(id)a1;

@end
