@class NSString, UITapGestureRecognizer, UIView;
@protocol SidebarContentDimmingViewDelegate;

@interface SidebarContentDimmingView : UIView <UIGestureRecognizerDelegate> {
    UITapGestureRecognizer *_dismissRecognizer;
    UIView *_dimmingView;
}

@property (retain, nonatomic) UIView *passthroughView;
@property (weak, nonatomic) id<SidebarContentDimmingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)setTransparent:(BOOL)a0;
- (void)_dismissRecognized:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 dimmedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setDimmedContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
