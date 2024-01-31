@class UIScrollView, CADisplayLink;
@protocol _UIAutoScrollBehavior;

@interface _UIAutoScrollAssistant : NSObject

@property (retain, nonatomic) CADisplayLink *displayLink;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } point;
@property (nonatomic) struct CGPoint { double x; double y; } referenceContentOffsetForPoint;
@property (nonatomic) double lastTimestamp;
@property (nonatomic) BOOL started;
@property (retain, nonatomic) id<_UIAutoScrollBehavior> behavior;
@property (readonly, weak, nonatomic) UIScrollView *scrollView;
@property (nonatomic) long long mode;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } touchInsets;
@property (nonatomic) unsigned long long allowedDirections;

- (void)stop;
- (void)setPoint:(struct CGPoint { double x0; double x1; })a0 forContentOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_adjustPointToCurrentContentOffset;
- (void).cxx_destruct;
- (BOOL)_scrollContinuous;
- (void)autoScrollFromPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleAutoScrollerWithContentOffset:(struct CGPoint { double x0; double x1; })a0 direction:(unsigned long long)a1;
- (id)initWithScrollView:(id)a0;
- (void)displayLinkFired:(id)a0;

@end
