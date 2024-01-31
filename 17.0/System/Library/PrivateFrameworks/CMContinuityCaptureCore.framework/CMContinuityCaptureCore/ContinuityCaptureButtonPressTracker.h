@class NSMutableSet;

@interface ContinuityCaptureButtonPressTracker : NSObject {
    unsigned long long _creationTime;
    NSMutableSet *_buttonPressStateByUsage;
    unsigned long long _buttonLongPressTimeout;
}

@property (readonly) BOOL valid;

- (void)clear;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)registerCordPress:(long long)a0 down:(BOOL)a1;

@end
