@interface PKAppBackgroundStateTracker : NSObject {
    _Atomic BOOL _inBackground;
    Class _applicationClass;
}

- (id)init;
- (void)_updateState;

@end
