@class NSString, NSTimer, CKInvisibleInkEffectView, UIView;
@protocol CKInvisibleInkEffectHostView;

@interface CKInvisibleInkEffectController : NSObject <CKInvisibleInkEffectViewDelegate>

@property (retain, nonatomic) CKInvisibleInkEffectView *effectView;
@property (weak, nonatomic) UIView<CKInvisibleInkEffectHostView> *hostView;
@property (nonatomic) BOOL effectViewNeedsReset;
@property (retain, nonatomic) NSTimer *resumeTimer;
@property (retain, nonatomic) UIView *borrowedEffectViewSnapshot;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic, getter=isSuspended) BOOL suspended;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)_updateBorrowedEffectViewSnapshot;
- (id)borrowEffectView;
- (void)hostViewDidLayoutSubviews;
- (void)hostViewDidUpdateSnapshot:(id)a0;
- (id)initWithHostView:(id)a0;
- (void)invisibleInkEffectViewWasUncovered:(id)a0;
- (void)resumeTimerFired:(id)a0;
- (void)returnBorrowedEffectView;
- (void)suspendForTimeInterval:(double)a0;
- (void)updateBorrowedEffectViewSnapshot;

@end
