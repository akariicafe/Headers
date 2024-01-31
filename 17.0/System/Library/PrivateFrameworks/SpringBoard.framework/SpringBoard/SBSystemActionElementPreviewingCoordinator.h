@protocol SBSystemActionCoordinatedElementPreviewing, SAInvalidatable;

@interface SBSystemActionElementPreviewingCoordinator : NSObject {
    id<SAInvalidatable> _urgencyAssertion;
    id<SAInvalidatable> _alertingAssertion;
    id<SAInvalidatable> _expansionAssertion;
    long long _expansionAnimationStyle;
    id<SBSystemActionCoordinatedElementPreviewing> _element;
}

- (void).cxx_destruct;

@end
