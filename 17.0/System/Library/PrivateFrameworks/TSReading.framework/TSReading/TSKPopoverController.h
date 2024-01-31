@class NSString;
@protocol UIPopoverControllerDelegate;

@interface TSKPopoverController : UIPopoverController <UIPopoverControllerDelegate> {
    id<UIPopoverControllerDelegate> mSavedDelegate;
    BOOL mIsDismissing;
}

@property (nonatomic) BOOL dismissOnUndo;
@property (nonatomic) BOOL dismissOnMoviePlayback;
@property (nonatomic) BOOL dismissAnimatedOnOrientationChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)anyPopoversVisible;
+ (double)defaultPopoverPlacementPadding;

- (void)dealloc;
- (void)dismissPopoverAnimated:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (id)initWithContentViewController:(id)a0;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (BOOL)popoverControllerShouldDismissPopover:(id)a0;
- (void)presentPopoverFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 permittedArrowDirections:(unsigned long long)a2 animated:(BOOL)a3;
- (void)p_sendPopoverHidDelegateMessage;
- (void)moviePlaybackWillBegin:(id)a0;
- (void)p_applicationDidEnterBackground:(id)a0;
- (void)p_dismissPopoverAnimated:(BOOL)a0;
- (void)p_orientationWillChange:(id)a0;
- (void)p_willShowPopoverNotification:(id)a0;
- (void)presentPopoverFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 permittedArrowDirections:(unsigned long long)a2 animated:(BOOL)a3 constrainToView:(BOOL)a4 withPadding:(double)a5;

@end
