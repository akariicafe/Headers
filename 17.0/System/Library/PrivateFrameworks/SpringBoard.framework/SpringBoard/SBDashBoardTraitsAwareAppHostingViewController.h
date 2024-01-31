@class SBTraitsSceneParticipantDelegate, UIWindow, SBTraitsOrientedContentViewController, NSString, TRAParticipant;
@protocol SBApplicationHosting;

@interface SBDashBoardTraitsAwareAppHostingViewController : UIViewController <CSTraitsAwareOrientedAppHosting>

@property (retain, nonatomic) TRAParticipant *traitsParticipant;
@property (retain, nonatomic) SBTraitsSceneParticipantDelegate *traitsParticipantDelegate;
@property (retain, nonatomic) SBTraitsOrientedContentViewController *orientedContentViewController;
@property (retain, nonatomic) UIWindow *targetWindow;
@property (weak, nonatomic) id<SBApplicationHosting> appHosting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_updateWindowLevel;
- (void)_acquireTraitsParticipantIfNeeded;
- (id)_traitsArbiter;
- (id)hostedSceneHandle;
- (void)sceneDidAttach;
- (void)sceneWasDestroyed;
- (id)_effectiveWindow;
- (id)_hostedAppViewController;
- (id)_hostedSceneHandle;
- (void)_invalidateTraitsParticipant;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_referenceBoundsForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAppHosting:(id)a0 targetWindow:(id)a1;
- (void)setContentViewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
