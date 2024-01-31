@class PXUISubjectTrackingView, NSString, CALayer, NUMediaView;
@protocol PUVideoEditOverlayViewControllerDelegate;

@interface PUVideoEditOverlayViewController : UIViewController <PXSubjectTrackingViewDelegate>

@property (retain, nonatomic) PXUISubjectTrackingView *trackingView;
@property (retain, nonatomic) NUMediaView *mediaView;
@property (retain, nonatomic) CALayer *safeAreaMask;
@property (nonatomic) BOOL disabledForCinematographyScriptLoad;
@property (weak, nonatomic) id<PUVideoEditOverlayViewControllerDelegate> overlayControllerDelegate;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (id)composition;
- (void)setHidden:(BOOL)a0 animated:(BOOL)a1;
- (id)compositionController;
- (void)scriptDidUpdate;
- (void)enableUIForCinematographyScriptLoad:(BOOL)a0;
- (id)initWithMediaView:(id)a0 cineController:(id)a1;
- (void)interactionBegan;
- (id)newFocusStatusBadge;
- (id)newTrackingViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 initialState:(long long)a1;
- (void)objectTrackingFinishedWithSuccess:(BOOL)a0;
- (void)objectTrackingStartedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForFocusStateBadge:(id)a0;
- (void)renderDidChange:(BOOL)a0;
- (void)setMessage:(id)a0 forFocusStateBadge:(id)a1;
- (void)setTrackingInProgressTextForFocusStateBadge:(id)a0;
- (void)showTrackingInformationalString:(id)a0;
- (void)subjectFocusStateDidChange:(long long)a0 forBadge:(id)a1 focusedDisparity:(double)a2;
- (void)subjectTrackingStateDidChange:(long long)a0 forView:(id)a1 animated:(BOOL)a2;
- (void)trackedObjectWasUpdatedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 shouldStop:(BOOL *)a1;
- (void)trackingWasEditedAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })unadjustedTimeForPlayerTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_setState:(long long)a0 forView:(id)a1 animated:(BOOL)a2;
- (void)frameTimeDidChange;
- (id)localizedStringForCinematicTrackingBadgeMessage:(long long)a0;
- (void)setNeedsUpdateTrackingFrame;
- (void)trackingWasEdited;

@end
