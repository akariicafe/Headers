@class FTCinematicInput, FTCinematicHighPriorityTrackerState;

@interface FTCinematicTrackingState : NSObject {
    struct shared_ptr<ft::CinematicTracker> { struct CinematicTracker *__ptr_; struct __shared_weak_count *__cntrl_; } _tracker;
    unsigned long long _commitToken;
    struct shared_ptr<ft::Frame> { struct Frame *__ptr_; struct __shared_weak_count *__cntrl_; } _frame;
    BOOL _isTapToTrackOverlapWithIspMitigationEnabled;
}

@property (readonly, nonatomic) FTCinematicHighPriorityTrackerState *highPriorityTrackerState;
@property (readonly, nonatomic) FTCinematicInput *input;

+ (id)stateWithTracker:(struct shared_ptr<ft::CinematicTracker> { struct CinematicTracker *x0; struct __shared_weak_count *x1; })a0 frame:(struct shared_ptr<ft::Frame> { struct Frame *x0; struct __shared_weak_count *x1; })a1 input:(id)a2;

- (id)commit;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
