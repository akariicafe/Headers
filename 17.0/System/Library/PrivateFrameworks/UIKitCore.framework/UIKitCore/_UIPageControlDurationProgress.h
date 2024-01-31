@protocol _UIPageControlDurationProgressDelegate;

@interface _UIPageControlDurationProgress : UIPageControlTimerProgress {
    struct { unsigned char shouldAdvanceToPageSPI : 1; } _delegateImplements;
}

@property (weak, nonatomic) id<_UIPageControlDurationProgressDelegate> delegate;
@property (nonatomic) double pageDuration;
@property (nonatomic) BOOL resetsToInitialPageAtEnd;

- (void)pause;
- (void)resume;
- (void)setDelegate:(id)a0;
- (BOOL)_shouldAdvanceToPage:(long long)a0;
- (id)initWithPageDuration:(double)a0;
- (double)pageDurationForPage:(long long)a0;
- (void)setCustomPageDuration:(double)a0 forPage:(long long)a1;

@end
