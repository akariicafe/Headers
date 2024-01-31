@class NSString;
@protocol SBAppClipOverlayViewDelegate;

@interface SBAppClipOverlayView : SBFTouchPassThroughView <BSInvalidatable>

@property (weak, nonatomic) id<SBAppClipOverlayViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
