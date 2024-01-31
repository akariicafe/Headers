@class NSMutableSet, BSAnimationSettings;

@interface _UIWindowOrientationUpdate : NSObject {
    NSMutableSet *_trackedFences;
    long long _toOrientation;
    BSAnimationSettings *_transitionAnimationSettings;
    id /* block */ _updateBlock;
}

- (void).cxx_destruct;

@end
