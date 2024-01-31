@interface SRUIFSiriSessionStateSignpostLogger : NSObject {
    unsigned long long _thinkingIntervalID;
}

- (void)sessionStateHandler:(id)a0 didTransitionFromState:(long long)a1 toState:(long long)a2 forEvent:(long long)a3 machAbsoluteTime:(double)a4;

@end
