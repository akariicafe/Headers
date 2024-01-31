@class NSMutableDictionary, CADisplayLink;
@protocol UIPageControlTimerProgressDelegate;

@interface UIPageControlTimerProgress : UIPageControlProgress {
    double _previousTime;
    double _currentDuration;
    double _currentDurationProgress;
    struct { unsigned char progressDidChange : 1; unsigned char shouldAdvanceToPage : 1; } _delegateImplements;
}

@property (retain, nonatomic) NSMutableDictionary *customDurationByPage;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (nonatomic) BOOL enableTimer;
@property (weak, nonatomic) id<UIPageControlTimerProgressDelegate> delegate;
@property (nonatomic) BOOL resetsToInitialPageAfterEnd;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic) double preferredDuration;

- (void)setPageControl:(id)a0;
- (void)dealloc;
- (void)setCurrentProgress:(float)a0;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (void)_updateTimer;
- (BOOL)_canInstallTimer;
- (void)_didChangeCurrentPage;
- (void)_displayLinkTicked:(id)a0;
- (void)_pageControlDidMoveToWindow;
- (void)_progressVisibilityChanged:(BOOL)a0;
- (BOOL)_shouldAdvanceToPage:(long long)a0;
- (double)durationForPage:(long long)a0;
- (id)initWithPreferredDuration:(double)a0;
- (void)pauseTimer;
- (void)resumeTimer;
- (void)setDuration:(double)a0 forPage:(long long)a1;

@end
