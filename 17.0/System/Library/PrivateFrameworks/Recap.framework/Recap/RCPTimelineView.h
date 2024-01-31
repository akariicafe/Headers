@class CALayer, NSTimer, RCPMovie;
@protocol RCPTimelineViewDelegate;

@interface RCPTimelineView : UIView {
    CALayer *_playbackHead;
    CALayer *_cropStartHead;
    CALayer *_cropEndHead;
    unsigned long long _time;
    long long _draggingHandle;
    NSTimer *_playbackTimer;
}

@property (weak, nonatomic) id<RCPTimelineViewDelegate> delegate;
@property (retain, nonatomic) RCPMovie *recapMovie;
@property (nonatomic) unsigned long long startCropTimestamp;
@property (nonatomic) unsigned long long endCropTimestamp;

- (BOOL)isFlipped;
- (void)setTime:(unsigned long long)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)setup;
- (void)setNeedsDisplay:(BOOL)a0;
- (void)startPlayback;
- (void)dragAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)cropHead:(BOOL)a0;
- (void)dragBeganAtLocation:(struct CGPoint { double x0; double x1; })a0 hitThreshold:(double)a1;
- (void)updateCropUI;
- (double)xForTimestamp:(unsigned long long)a0;

@end
