@class PKPassGroupView, UIPanGestureRecognizer, _UIDynamicValueAnimation;

@interface PKPassGroupViewVerticalPanAnimator : NSObject {
    BOOL _recognizing;
    _UIDynamicValueAnimation *_dismissAnimation;
    struct _UIUpdateRequest { unsigned int flags; unsigned int minRate; unsigned int preferredRate; unsigned int maxRate; unsigned long long phase; unsigned long long load; } _updateRequest;
    unsigned int _updateReason;
    BOOL _invalidated;
    BOOL _updating;
    PKPassGroupView *_groupView;
    UIPanGestureRecognizer *_gestureRecognizer;
    id /* block */ _updater;
    double _panningViewTargetScale;
    struct CGPoint { double x; double y; } _panningViewStartPosition;
    struct CGPoint { double x; double y; } _panningViewTargetPosition;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
