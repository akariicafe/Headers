@class NSString, UIPanelBorderReplicatingView;

@interface UIPanelBorderView : UIView

@property (retain, nonatomic) UIPanelBorderReplicatingView *replicatingView;
@property (nonatomic) BOOL observesTime;
@property (retain, nonatomic) NSString *backdropGroupName;
@property (nonatomic) long long statusBarAvoidance;
@property (nonatomic, getter=isDraggable) BOOL draggable;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_cachedBackdropGroupName;

@end
