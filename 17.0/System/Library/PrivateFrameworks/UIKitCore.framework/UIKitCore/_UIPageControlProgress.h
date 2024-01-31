@protocol _UIPageControlProgressDelegate;

@interface _UIPageControlProgress : UIPageControlProgress {
    struct { unsigned char progressForPage : 1; unsigned char didPause : 1; unsigned char didResume : 1; } _delegateImplements;
}

@property (weak, nonatomic) id<_UIPageControlProgressDelegate> delegate;

- (void)setDelegate:(id)a0;
- (void)_pausePageProgress;
- (void)_progressVisibilityChanged:(BOOL)a0;
- (void)_resumePageProgress;

@end
