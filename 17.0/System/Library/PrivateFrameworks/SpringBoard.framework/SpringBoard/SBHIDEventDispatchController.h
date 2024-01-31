@protocol BSInvalidatable;

@interface SBHIDEventDispatchController : NSObject {
    id<BSInvalidatable> _dispatchingAssertion;
    id<BSInvalidatable> _dispatchingAssertionForVoiceCommand;
    id<BSInvalidatable> _keyCommandDispatchingAssertion;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;

@end
