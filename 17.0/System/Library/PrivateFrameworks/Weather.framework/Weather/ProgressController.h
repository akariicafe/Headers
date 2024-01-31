@class NSTimer;

@interface ProgressController : NSObject {
    BOOL _progressShowing;
    int _loadingCount;
    NSTimer *_hideSpinnerTimer;
}

+ (id)sharedProgressController;

- (void)suspend;
- (void).cxx_destruct;
- (void)_showSpinner;
- (void)_hideSpinner;
- (void)setLoadingData:(BOOL)a0;
- (void)_setHideSpinnerTimer:(id)a0;
- (void)userScrolled;

@end
